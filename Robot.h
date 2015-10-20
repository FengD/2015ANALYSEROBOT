class Robot {

private:
	int String_direction;
	int Position_position;
	int Plot_plot;
	int Objet_objet;
	int EtatRobot_instance;

public:
	void avancer(int int_x, int int_y);

	void tourner(int String_direction);

	void saisir(int Objet_o);

	void poser();

	int peser();

	void rencontrerPlot(int Plot_p);

	int evaluerPlot();

	void figer();

	void repartir();

	void afficher();
};
