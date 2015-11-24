format  long;
h=5;
X=0:pi/h:pi;
[x,y] = meshgrid(X);


z=(1/sinh(pi))*(sin(x).*sinh(pi-y)+sin(y).*sinh(pi-x));
surf (x,y,z)
xlabel('0 < x < pi')
ylabel('0 < y < pi')
