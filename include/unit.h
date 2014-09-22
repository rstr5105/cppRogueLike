#ifndef UNIT_H
#define UNIT_H


class Unit {
	public:
		Unit();
		virtual ~Unit();
		int Gethealth() {
			return m_health;
		}
		void Sethealth(int val) {
			m_health = val;
		}
		int Getmana() {
			return m_mana;
		}
		void Setmana(int val) {
			m_mana = val;
		}
		int Getarmor() {
			return m_armor;
		}
		void Setarmor(int val) {
			m_armor = val;
		}
		int Getdamage() {
			return m_damage;
		}
		void Setdamage(int val) {
			m_damage = val;
		}
		bool isAlive() {
			return alive;
		}
		int getSpeed() {
			return speed;
		}
		int getLevel(){
			return level;
		}
		int getXp(){
			return xp;
		}

		int ammoLeft(){
			return ammo;
		}

		int getGold(){
			return gold;
		}
		int getX(){
			return posX;
		}
		int getY(){
			return posY;
		}
		char* getSymbol(){
			return symbol;
		}
	protected:
		int m_health;
		int m_mana;
		int m_armor;
		int m_damage;
		bool alive;
		int speed;
		int level;
		int xp;
		int posX;
		int posY;
		int ammo;
		int gold;
		char* symbol;
	private:

};

#endif // UNIT_H
