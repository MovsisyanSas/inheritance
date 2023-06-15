#include <iostream>

class animal {
public:
	std::string ability;
	std::string heart;
	std::string eye;
	std::string mouth;
	std::string ears;
	animal() {
		ability = "can breath,eat,drink,live,move";
		heart = "heart";
		eye = ",eye";
		mouth = ",mouth";
		ears = ",ears";
	}
	void display() {
		std::cout << ability << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << std::endl;
	}
};

class fish : public animal {
public:
	std::string FishAbility;
	std::string gills;
	std::string scale;
	std::string slime;
	std::string caviar;
	fish() {
		FishAbility = ",live in water longer,swim faster,breath under water";
		gills = "gills";
		scale = ",scale";
		slime = ",slime";
		caviar = ",caviar";
	}
	void display() {
		std::cout << ability << FishAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << gills << scale << caviar << std::endl;
	}
};

class LandDweller : public animal {
public:
	std::string LandDwellerAbility;
	std::string teeth;
	std::string legs;
	std::string hand;
	std::string hair;
	LandDweller() {
		LandDwellerAbility= ",walk better,more flexible,smarter,wilder";
		teeth = "teeth";
		legs = ",legs";
		hand = ",hand";
		hair = ",hair";
	}
	void display() {
		std::cout << ability << LandDwellerAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << std::endl;
	}
};

class bird : public animal {
public:
	std::string BirdAbility;
	std::string wing;
	std::string legs;
	std::string feather;
	std::string beak;
	bird() {
		BirdAbility = ",fly,more careful,very fast, good vision";
	}
	void display() {
		std::cout << ability << BirdAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << wing << legs << feather << beak << std::endl;
	}
};

class ishxan : public fish {
public:
	std::string ishxanAbility;
	ishxan() {
		ishxanAbility = ",lives in Sevan, endemic, red colored";
	}
	void display() {
		std::cout << ability << FishAbility << ishxanAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << gills << scale << caviar << std::endl;
	}
};

class shark : public fish {
public:
	std::string sharkAbility;
	shark() {
		sharkAbility = ",wild,sharp teeth, good smelt of blood, huge, very fast under water";
	}
	void display() {
		std::cout << ability << FishAbility << sharkAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << gills << scale << caviar << std::endl;
	}
};

class lion : public LandDweller {
public:
	std::string lionAbility;
	lion() {
		lionAbility = ",strongest mammal, brave, orange";
	}
	void display() {
		std::cout << ability << LandDwellerAbility << lionAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << std::endl;
	}
};

class rabbit : public LandDweller {
public:
	std::string rabbitAbility;
	rabbit() {
		rabbitAbility = ",very flexible, small, hides good in snow, likes carrot";
	}
	void display() {
		std::cout << ability << LandDwellerAbility << rabbitAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << std::endl;
	}
};

class eagle : public bird {
public:
	std::string eagleAbility;
	eagle() {
		eagleAbility = ",wild, flies high, hunts very good, can take heavy things";
	}
	void display() {
		std::cout << ability << BirdAbility << eagleAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << wing << legs << feather << beak << std::endl;
	}
};

class parrot : public bird {
public:
	std::string parrotAbility;
	parrot() {
		parrotAbility = ",colorful, friendly, speaks in human lanuages, funny";
	}
	void display() {
		std::cout << ability << BirdAbility << parrotAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << wing << legs << feather << beak << std::endl;
	}
};

int main() {
	animal Animal;
	bird Bird;
	fish Fish;
	LandDweller landDweller;
	ishxan Ishxan;
	shark Shark;
	lion Lion;
	rabbit Rabiit;
	parrot Parrot;
	eagle Eagle;

	//uncomment as you wish with ctrl + k + u

	//Animal.display();
	//Bird.display();
	//Fish.display();
	//landDweller.display();
	//Ishxan.display();
	//Shark.display();
	//Lion.display();
	//Rabiit.display();
	//Parrot.display();
	//Eagle.display();
}