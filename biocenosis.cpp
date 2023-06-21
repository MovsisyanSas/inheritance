#include <iostream>

class animal {
public:
	std::string ability = "can breath,eat,drink,live,move";
	std::string heart = "heart";
	std::string eye = ",eye";
	std::string mouth = ",mouth";
	std::string ears = ",ears";
	std::string movement = "by limbs";

	virtual void display() {
		std::cout << ability << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << std::endl;
	}
	virtual void move() = 0;
	virtual ~animal() {
		std::cout << "animal class destructor" << std::endl;
	}
};

class fish : public animal {
public:
	std::string FishAbility = ",live in water longer,swim faster,breath under water";
	std::string gills = ",gills";
	std::string scale = ",scale";
	std::string slime = ",slime";
	std::string caviar = ",caviar";
	std::string FishMovement = "swimming";

	void display() override {
		std::cout << ability << FishAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << gills << scale << caviar << std::endl;
	}
	void move() override = 0;

	~fish() override {
		std::cout << "fish class destructor" << std::endl;
	}
};

class LandDweller : public animal {
public:
	std::string LandDwellerAbility = ",walk better,more flexible,smarter,wilder";
	std::string teeth = ",teeth";
	std::string legs = ",legs";
	std::string hand = ",hand";
	std::string hair = ",hair";
	std::string LDMovement = "walking/running/jumping";

	void display() override {
		std::cout << ability << LandDwellerAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << std::endl;
	}
	void move() override = 0;

	~LandDweller() override {
		std::cout << "LandDweller class destructor" << std::endl;
	}
};

class bird : public animal {
public:
	std::string BirdAbility = ",fly,more careful,very fast, good vision";
	std::string wing = ",wing";
	std::string legs = ",legs";
	std::string feather = ",feather";
	std::string beak = ",beak";
	std::string BirdMovement = "Flying";

	void display() override {
		std::cout << ability << BirdAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << wing << legs << feather << beak << std::endl;
	}
	void move() override = 0;

	~bird() override {
		std::cout << "bird class destructor" << std::endl;
	}
};

class ishxan : public fish {
public:
	std::string ishxanAbility;
	std::string IshxanMovement;
	ishxan() {
		ishxanAbility = ",lives in Sevan, endemic, red colored";
		IshxanMovement = "swimming";
	}
	void display() override final {
		std::cout << ability << FishAbility << ishxanAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << gills << scale << caviar << std::endl;
	}
	void move() override final {
		std::cout << IshxanMovement << std::endl;
	}
	ishxan(const ishxan& obj) {
		this->ishxanAbility = obj.ishxanAbility;
	}
	ishxan& operator = (const ishxan& obj) {
		this->ishxanAbility = obj.ishxanAbility;
	}
	~ishxan() override final {
		std::cout << "ishxan class destructor" << std::endl;
	}
};

class shark : public fish {
public:
	std::string sharkAbility;
	std::string teeth;
	std::string hugeTail;
	std::string SharkMovement;
	shark() {
		sharkAbility = ",wild,sharp teeth, good smelt of blood, huge, very fast under water";
		teeth = ",teeth";
		hugeTail = ",huge tail";
		SharkMovement = "swimming";
	}
	void display() override final {
		std::cout << ability << FishAbility << sharkAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << gills << scale << caviar << teeth << hugeTail << std::endl;
	}
	void move() override final {
		std::cout << SharkMovement << std::endl;
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
	~shark() override final {
		std::cout << "shark class destructor" << std::endl;
	}
};

class lion : public LandDweller {
public:
	std::string lionAbility;
	std::string milk;
	std::string muscles;
	std::string LionMovement;
	lion() {
		lionAbility = ",strongest mammal, brave, orange";
		milk = ",milk";
		muscles = ",muscles";
		LionMovement = "walking/running/jumping";
	}
	void display() override final {
		std::cout << ability << LandDwellerAbility << lionAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << milk << muscles << std::endl;
	}
	void move() override final {
		std::cout << LionMovement << std::endl;
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
	~lion() override final {
		std::cout << "lion class destructor" << std::endl;
	}
};

class rabbit : public LandDweller {
public:
	std::string rabbitAbility;
	std::string wool;
	std::string longTeeth;
	std::string RabbitMovement;
	rabbit() {
		rabbitAbility = ",very flexible, small, hides good in snow, likes carrot";
		wool = ",wool";
		longTeeth = ",long teeth";
		RabbitMovement = "walking/running/jumping";
	}
	void display() override final {
		std::cout << ability << LandDwellerAbility << rabbitAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << wool << longTeeth << std::endl;
	}
	void move() override final {
		std::cout << RabbitMovement << std::endl;
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
	~rabbit() override final {
		std::cout << "rabbit class destructor" << std::endl;
	}
};

class eagle : public bird {
public:
	std::string eagleAbility;
	std::string claw;
	std::string EagleMovement;
	eagle() {
		eagleAbility = ",wild, flies high, hunts very good, can take heavy things";
		claw = ",claw";
		EagleMovement = "Flying";
	}
	void display() override final {
		std::cout << ability << BirdAbility << eagleAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << wing << legs << feather << beak << claw << std::endl;
	}
	void move() override final {
		std::cout << EagleMovement << std::endl;
	}
	eagle(const eagle& obj) {
		this->eagleAbility = obj.eagleAbility;
		this->claw = obj.claw;
	}
	eagle& operator = (const eagle& obj) {
		this->eagleAbility = obj.eagleAbility;
		this->claw = obj.claw;
	}
	~eagle() override final {
		std::cout << "eagle class destructor" << std::endl;
	}
};

class parrot : public bird {
public:
	std::string parrotAbility;
	std::string colorfulFeather;
	std::string ParrotMovement;
	parrot() {
		parrotAbility = ",colorful, friendly, speaks in human lanuages, funny";
		colorfulFeather = ",colorful feather";
		ParrotMovement = "Flying";
	}
	void display() override final {
		std::cout << ability << BirdAbility << parrotAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << wing << legs << feather << beak << colorfulFeather << std::endl;
	}
	void move() override final {
		std::cout << ParrotMovement << std::endl;
	}
	parrot(const parrot& obj) {
		this->parrotAbility = obj.parrotAbility;
		this->colorfulFeather = obj.colorfulFeather;
	}
	parrot& operator = (const parrot& obj) {
		this->parrotAbility = obj.parrotAbility;
		this->colorfulFeather = obj.colorfulFeather;
	}
	~parrot() override final {
		std::cout << "parrot class destructor" << std::endl;
	}
};

int main() {

	animal* Ishxan = new ishxan;
	animal* Shark = new shark;
	animal* Lion = new lion;
	animal* Rabbit = new rabbit;
	animal* Parrot = new parrot;
	animal* Eagle = new eagle;

	animal** arr = new animal * [6];

	arr[0] = Ishxan;
	arr[1] = Shark;
	arr[2] = Lion;
	arr[3] = Rabbit;
	arr[4] = Parrot;
	arr[5] = Eagle;

	for (int i = 0; i < 6; i++)
	{
		arr[i]->display();
		std::cout << std::endl;
		arr[i]->move();
		std::cout << std::endl;
		std::cout << std::endl;
	}
}