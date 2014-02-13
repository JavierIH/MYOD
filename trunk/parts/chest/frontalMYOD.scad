//Arduino Mega Board: 54x102x10


module pasantes(){
	translate([29,46,-1])cylinder(r=2,h=70);
	translate([29,-46,-1])cylinder(r=2,h=70);
	translate([-19,46,-1])cylinder(r=2,h=70);
	translate([-19,-46,-1])cylinder(r=2,h=70);
}

module servo(z){
	cube([42,22,z]);
	translate([-3,6,0])union(){
		cylinder(r=2, h=z,$fn=20);
		translate([48,0,0])cylinder(r=2, h=z,$fn=20);
		translate([48,10,0])cylinder(r=2, h=z,$fn=20);
		translate([0,10,0])cylinder(r=2, h=z,$fn=20);
	}
}

module miniservo(z){
	//cube([24,14,z]);
	translate([15,7,0])rotate([0,0,0])cylinder(r=8,h=z);
	translate([-1.75,7,0])union(){
		cylinder(r=1.5, h=z,$fn=20);
		translate([27.5,0,0])cylinder(r=1.5, h=z,$fn=20);
		
	}
}

module tuerca(){ //M3
	cylinder(r=3, h=4,$fn=6);
}

xmax=66;
ymax=102;

difference(){
	union(){
		translate([-64/2,-102/2,0])cube([xmax,ymax,28]);
		translate([-64/2+20,-20,0])cube([46,40,35]);		
	}
	translate([-20,-25,2])cube([51,50,34]); //cajeado
	translate([-29,-61,-4])rotate([0,0,20])cube([10,100,100]);
	mirror([0,1,0])translate([-29,-61,-4])rotate([0,0,20])cube([10,100,100]);

	difference(){
		translate([-15,50,6.01])rotate([90,0,0])servo(100);
		translate([30.8,0,6])cube([10,49,70],center=true);
	}
	
//Huecos para tuercas
	translate([-18,28,12])rotate([90,0,0]){
		rotate([0,0,30])cylinder(r=3, h=4,$fn=6);
		translate([3,0,0])rotate([0,0,45])cylinder(r=4.2, h=4,$fn=4);
		translate([48,0,0])rotate([0,0,30])tuerca();
		translate([45,0,0])rotate([0,0,45])cylinder(r=4.2, h=4,$fn=4);
		translate([48,10,0])rotate([0,0,30])tuerca();
		translate([45,10,0])rotate([0,0,45])cylinder(r=4.2, h=4,$fn=4);
		translate([0,10,0])rotate([0,0,30])tuerca();
		translate([3,10,0])rotate([0,0,45])cylinder(r=4.2, h=4,$fn=4);
	}
	mirror([0,1,0])translate([-18,28,12])rotate([90,0,0]){
		rotate([0,0,30])cylinder(r=3, h=4,$fn=6);
		translate([3,0,0])rotate([0,0,45])cylinder(r=4.2, h=4,$fn=4);
		translate([48,0,0])rotate([0,0,30])tuerca();
		translate([45,0,0])rotate([0,0,45])cylinder(r=4.2, h=4,$fn=4);
		translate([48,10,0])rotate([0,0,30])tuerca();
		translate([45,10,0])rotate([0,0,45])cylinder(r=4.2, h=4,$fn=4);
		translate([0,10,0])rotate([0,0,30])tuerca();
		translate([3,10,0])rotate([0,0,45])cylinder(r=4.2, h=4,$fn=4);
	}






	translate([40,-7,6])rotate([0,-90,0])miniservo(30);
	translate([-64,0,17])rotate([0,90,0])cylinder(r=15,h=40);

//Cruceta del servo	
	translate([-50,0,17])rotate([0,90,0])cylinder(r=11.5/2,h=40);
	translate([-50,+13,17])rotate([0,90,0])cylinder(r=2,h=40);
	translate([-50,-13,17])rotate([0,90,0])cylinder(r=2,h=40);
	translate([-62.5,+13,17])rotate([0,90,0])cylinder(r=3,h=40,$fn=6);
	translate([-62.5,-13,17])rotate([0,90,0])cylinder(r=3,h=40,$fn=6);

//Huecos para permitir el giro
	translate([-64,0,3])rotate([29,0,0])cube([40,60,40]);
	mirror([0,1,0])translate([-64,0,3])rotate([29,0,0])cube([40,60,40]);

	translate([-32,51-13,6])cube([69,40,23]);
	mirror([0,1,0])	translate([-32,51-13,6])cube([69,40,23]);

//Agujeros chasis
	pasantes();





}/**/




