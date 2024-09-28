#ifndef BrazoRobot_h
#define BrazoRobot_h

class BrazoRobotico{
	private:
		double x, y, z;
		bool sujetar_objeto;

	public:
		BrazoRobotico(double x=0, double y=0, double z=0, bool sujetar_objeto=false);

		double getX() const;
		double getY() const;
		double getZ() const;
		bool esta_sujetando() const;

		void coger();
		void soltar();
		void mover(double nuevaX, double nuevaY, double nuevaZ);

};

#endif



