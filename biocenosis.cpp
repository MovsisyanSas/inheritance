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
	virtual void display() {
		std::cout << ability << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << std::endl;
	}
	animal(const animal& obj) {
		this->ability = obj.ability;
		this->heart = obj.heart;
		this->eye = obj.eye;
		this->mouth = obj.mouth;
		this->ears = obj.ears;
	}
	animal& operator = (const animal& obj) {
		this->ability = obj.ability;
		this->heart = obj.heart;
		this->eye = obj.eye;
		this->mouth = obj.mouth;
		this->ears = obj.ears;
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
		gills = ",gills";
		scale = ",scale";
		slime = ",slime";
		caviar = ",caviar";
	}
	void display() {
		std::cout << ability << FishAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << gills << scale << caviar << std::endl;
	}
	fish(const fish& obj) {
		this->gills = obj.gills;
		this->scale = obj.scale;
		this->slime = obj.slime;
		this->caviar = obj.caviar;
		this->FishAbility = obj.FishAbility;
	}
	fish& operator = (const fish& obj) {
		this->gills = obj.gills;
		this->scale = obj.scale;
		this->slime = obj.slime;
		this->caviar = obj.caviar;
		this->FishAbility = obj.FishAbility;
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
		teeth = ",teeth";
		legs = ",legs";
		hand = ",hand";
		hair = ",hair";
	}
	void display() {
		std::cout << ability << LandDwellerAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << std::endl;
	}
	LandDweller(const LandDweller& obj) {
		this->LandDwellerAbility = obj.LandDwellerAbility;
		this->teeth = obj.teeth;
		this->legs = obj.legs;
		this->hand = obj.hand;
		this->hair = obj.hair;
	}
	LandDweller& operator = (const LandDweller& obj) {
		this->LandDwellerAbility = obj.LandDwellerAbility;
		this->teeth = obj.teeth;
		this->legs = obj.legs;
		this->hand = obj.hand;
		this->hair = obj.hair;
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
		wing = ",wing";
		legs = ",legs";
		feather = ",feather";
		beak = ",beak";
	}
	void display() {
		std::cout << ability << BirdAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << wing << legs << feather << beak << std::endl;
	}
	bird(const bird& obj) {
		this->BirdAbility = obj.BirdAbility;
		this->wing = obj.wing;
		this->legs = obj.legs;
		this->feather = obj.feather;
		this->beak = obj.beak;
	}
	bird& operator = (const bird& obj) {
		this->BirdAbility = obj.BirdAbility;
		this->wing = obj.wing;
		this->legs = obj.legs;
		this->feather = obj.feather;
		this->beak = obj.beak;
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
	ishxan(const ishxan& obj) {
		this->ishxanAbility = obj.ishxanAbility;
	}
	ishxan& operator = (const ishxan& obj) {
		this->ishxanAbility = obj.ishxanAbility;
	}
};

class shark : public fish {
public:
	std::string sharkAbility;
	std::string teeth;
	std::string hugeTail;
	shark() {
		sharkAbility = ",wild,sharp teeth, good smelt of blood, huge, very fast under water";
		teeth = ",teeth";
		hugeTail = ",huge tail";
	}
	void display() {
		std::cout << ability << FishAbility << sharkAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << gills << scale << caviar << teeth << hugeTail << std::endl;
	}
	shark(const shark& obj) {
		this->sharkAbility = obj.sharkAbility;
		this->teeth = obj.teeth;
		this->hugeTail = obj.hugeTail;
	}
	shark& operator = (const shark& obj) {
		this->sharkAbility = obj.sharkAbility;
		this->teeth = obj.teeth;
		this->hugeTail = obj.hugeTail;
	}
};

class lion : public LandDweller {
public:
	std::string lionAbility;
	std::string milk;
	std::string muscles;
	lion() {
		lionAbility = ",strongest mammal, brave, orange";
		milk = ",milk";
		muscles = ",muscles";
	}
	void display() {
		std::cout << ability << LandDwellerAbility << lionAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << milk << muscles << std::endl;
	}
	lion(const lion& obj) {
		this->lionAbility = obj.lionAbility;
		this->milk = obj.milk;
		this->muscles = obj.muscles;
	}
	lion& operator = (const lion& obj) {
		this->lionAbility = obj.lionAbility;
		this->milk = obj.milk;
		this->muscles = obj.muscles;
	}
};

class rabbit : public LandDweller {
public:
	std::string rabbitAbility;
	std::string wool;
	std::string longTeeth;
	rabbit() {
		rabbitAbility = ",very flexible, small, hides good in snow, likes carrot";
		wool = ",wool";
		longTeeth = ",long teeth";
	}
	void display() {
		std::cout << ability << LandDwellerAbility << rabbitAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << wool << longTeeth << std::endl;
	}
	rabbit(const rabbit& obj) {
		this->rabbitAbility = obj.rabbitAbility;
		this->wool = obj.wool;
		this->longTeeth = obj.longTeeth;
	}
	rabbit& operator = (const rabbit& obj) {
		this->rabbitAbility = obj.rabbitAbility;
		this->wool = obj.wool;
		this->longTeeth = obj.longTeeth;
	}
};

class eagle : public bird {
public:
	std::string eagleAbility;
	std::string claw;
	eagle() {
		eagleAbility = ",wild, flies high, hunts very good, can take heavy things";
		claw = ",claw";
	}
	void display() {
		std::cout << ability << BirdAbility << eagleAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << wing << legs << feather << beak << claw << std::endl;
	}
	eagle(const eagle& obj) {
		this->eagleAbility = obj.eagleAbility;
		this->claw = obj.claw;
	}
	eagle& operator = (const eagle& obj) {
		this->eagleAbility = obj.eagleAbility;
		this->claw = obj.claw;
	}
};

class parrot : public bird {
public:
	std::string parrotAbility;
	std::string colorfulFeather;
	parrot() {
		parrotAbility = ",colorful, friendly, speaks in human lanuages, funny";
		colorfulFeather = ",colorful feather";
	}
	void display() {
		std::cout << ability << BirdAbility << parrotAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << wing << legs << feather << beak << colorfulFeather << std::endl;
	}
	parrot(const parrot& obj) {
		this->parrotAbility = obj.parrotAbility;
		this->colorfulFeather = obj.colorfulFeather;
	}
	parrot& operator = (const parrot& obj) {
		this->parrotAbility = obj.parrotAbility;
		this->colorfulFeather = obj.colorfulFeather;
	}
};

int main() {
	animal* Bird = new bird;
	animal* Land = new LandDweller;
	animal* Fish = new fish;
	animal* Ishxan = new ishxan;
	animal* Shark = new shark;
	animal* Lion = new lion;
	animal* Rabbit = new rabbit;
	animal* Parrot = new parrot;
	animal* Eagle = new eagle;

	animal** arr = new animal * [9];
	arr[0] = Bird;
	arr[1] = Land;
	arr[2] = Fish;
	arr[3] = Ishxan;
	arr[4] = Shark;
	arr[5] = Lion;
	arr[6] = Rabbit;
	arr[7] = Parrot;
	arr[8] = Eagle;

	for (int i = 0; i < 9; i++)
	{
		arr[i]->display();
		std::cout << std::endl;
		std::cout << std::endl;
	}
}