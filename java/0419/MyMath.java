class Point{
	private double x;
	private double y;

	public Point(){}
	public Point(double x, double y){this.x=x; this.y=y;}
	public Point setX(double x){this.x=x; return this;}
	public Point setY(double y){this.y=y; return this;}
	public double getX(){return x;}
	public double getY(){return y;}
	public String toString(){return String.format("point: (%f, %f)", x, y);}
}

public class MyMath{
	public static Point add(Point x, Point y){
		Point p = new Point();
		p.setX(x.getX() + y.getX());
		p.setY(x.getY() + y.getY());
		return p;
	}

	public static void main(String [] args){
		Point p1 = new Point(3, 5);
		Point p2 = new Point(8, 1);

		Point p3 = add(p1, p2);
		System.out.println(p3);
	}
}