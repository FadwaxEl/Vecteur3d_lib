#pragma once
#include <iostream>
namespace vect {
	class Vecteur3d
	{
	private:
		float vect[3];

	public:
		/*------------eviter le passage par valeur-------------*/
		Vecteur3d(float x=0.0, float y=0.0, float z=0.0);
		Vecteur3d(const Vecteur3d&) = delete; /** impossible de travailler par le cr propre à la classe allouer les passage par valeur**/
		Vecteur3d& operator=(const Vecteur3d&) = delete; /***interdire de travailler avec = ****/
		/*on a le droit de travailler avec le passage par reference ou bien par adresse*/

		void print()const;
		float at(unsigned int)const;
		float& operator[](unsigned int ); // si on a float ona just l'accés en lecture 
		//retourn la reference vers la variable
		bool operator==(const Vecteur3d& v)const;//protejer en meme temp notre vecteur et l'autre 
		bool operator!=(const Vecteur3d& v)const;
		Vecteur3d* opposite();
		Vecteur3d* operator+(const Vecteur3d&);
		Vecteur3d* operator-(const Vecteur3d&);
		Vecteur3d* operator*(const Vecteur3d&);
		Vecteur3d* operator^(const Vecteur3d&);
		double norme();
		Vecteur3d* produit(float val);


		friend 	void display(Vecteur3d& v);

	};
	void display(Vecteur3d& v);
};

