class Truck {

  private:
	double maxAcceleration, maxSpeed, length, width, maxDeceleration, a, speed, position;
	int id;
	//Route -> depends on how we are representing the roads

  public:
	Truck(int ID; double maxA = 1.0, double maxD = 1.0, double maxS = 1.0, double l = 2.0, double w = 1.0) {
		id = ID;
		maxAcceleration = maxA;
		maxSpeed = maxS; 
		length = l; 
		width = w; 
		maxDeceleration =, maxD; 
		a = 0; 
		speed = 0;
	}

	double acceleration() { return a; }
	double speed() { return speed; }
	double length() { return l; }
	double width() { return w; }
	double position()  { return position; }

	void changeSpeed(double desired) {
		//Is desired speed valid?
		if (desired > maxS) {
			cerr << "Tried to change speed above the max" << endl;
			changeSpeed(maxS);
			return;
		}
		else if (desired < 0) {
			cerr << "Given negetive speed" << endl;
			changeSpeed(0);
			return;
		}
		//Do the change
		if (speed < desired) {
			//Accelerate

		}
		else if (speed > desired) {
			//Decellerate 

		}
		else {
			//Speed is already desired
			a = 0;
		}
	}

};