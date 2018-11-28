function [k_gain] = compute_K(l, L, I, V, theta_param)
    % Declared symbolic variables, to use in jacobians below
    %
    syms theta V1 V2 V3 t x y r1 r2 r3
    u = [ r1; r2; r3 ];
    Vm = [
        -1/3 2/3 -1/3;
        -sqrt(3)/3 0 sqrt(3)/3;
        1/(3*l) 1/(3*l) 1/(3*l)
    ];
    Vm = Vm*(0.1016/2*u);
    
    % Rotation matrix for theta (about z-axis)
    R = [
        cos(theta) -sin(theta) 0;
        sin(theta) cos(theta) 0;
        0 0 1
    ];
    Vw = R' * Vm;
    
    % perform jacobian arithmetic using symbolic variables
    J1 = jacobian(Vw,[x,y,theta]);
    J2 = jacobian(Vw,[r1,r2,r3]);
    
    % assign values to symbolic variables
    r1 = -1/(0.1016/2);
    r2 = 2/(0.1016/2);
    r3 = -1/(0.1016/2);
    theta = theta_param;
    
    % Create matrices for LQR function
    A = eval(J1);
    B = eval(J2);
    C = eye(3);
    D = zeros(3,3);
    
    % create state-space model
    sysc1 = ss(A,B,C,D);
    
    % Tranform model from using continuous time, to discrete time
    [sysd1] = c2d(sysc1,0.1);
    
    % index discretized state-space matrices
    A = sysd1.A;
    B = sysd1.B;   
    
    T = I*L/V;
    speed = V/(L*2*I)/200; % rev/sec
    Pmax = 2*I*V;
    
    v = speed*2*pi; % rad/s
    v1 = 0.1016*v/2;
    
    Q = eye(3) * 1/v1^2; 
    R = eye(3) * 1/v^2; 
    
    % compute controller paramters
    [k_gain,S,e] = dlqr(A,B,Q,R);    
end