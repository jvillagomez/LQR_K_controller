clear all
close all
clc

% Define your LQR gain constraints here -------------------
% Each value must be assigned
l = 1.0;
L = 0.033;
I = 0.35;
V = 12.0;
theta = 0;


% NO TOUCHY TOUCHY ----------------------------------------
% Seriously, dont touch anything past here-----------------
k_gain = compute_K(l, L, I, V, theta);

% The lines below update your variables above to the ROS workspace.
% Any and all ROS nodes now have access to these values.
% Simulink model/ros controller node agregate these values into a single k-gain matrix
% ROS parameter server cannot store matrices, so we store individual matrix elements as doubles

rosparam('set', '/controller/k_gain/row1_col1', k_gain(1,1))
rosparam('set', '/controller/k_gain/row1_col2', k_gain(1,2))
rosparam('set', '/controller/k_gain/row1_col3', k_gain(1,3))

rosparam('set', '/controller/k_gain/row2_col1', k_gain(2,1))
rosparam('set', '/controller/k_gain/row2_col2', k_gain(2,2))
rosparam('set', '/controller/k_gain/row2_col3', k_gain(2,3))

rosparam('set', '/controller/k_gain/row3_col1', k_gain(3,1))
rosparam('set', '/controller/k_gain/row3_col2', k_gain(3,2))
rosparam('set', '/controller/k_gain/row3_col3', k_gain(3,3))