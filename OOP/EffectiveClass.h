class Color {
public:

	// Constructors
	Color() : r(0x00), g(0x00), b(0x00) {};
	Color(int red, int green, int blue) : r(red), g(green), b(blue) {};

public:

	// Methods
	void SetColor(int r, int g, int b) {
		this->r = r;
		this->g = g;
		this->b = b;
	}

    int GetRed(int r) { this->r = r; }
    int GetGreen(int g) { this->g = g; }
    int GetBlue(int b) { this->b = b; }

	int GetRed() const { return r; }
	int GetGreen() const { return g; }
	int GetBlue() const { return b; }

    // Members
	int r, g, b;

};