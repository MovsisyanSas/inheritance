#include <iostream>

class animal {
public:
	std::string ability;
	std::string heart;
	std::string eye;
	std::string mouth;
	std::string ears;
	std::string movement;
	animal() {
		ability = "can breath,eat,drink,live,move";
		heart = "heart";
		eye = ",eye";
		mouth = ",mouth";
		ears = ",ears";
		movement = "by limbs";
	}
	virtual void display() {
		std::cout << ability << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << std::endl;
	}
	virtual void move() {
		std::cout << movement << std::endl;
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
	virtual ~animal() {
		std::cout << "animal class destructor" << std::endl;
	}
};

class fish : public animal {
public:
	std::string FishAbility;
	std::string gills;
	std::string scale;
	std::string slime;
	std::string caviar;
	std::string FishMovement;
	fish() {
		FishAbility = ",live in water longer,swim faster,breath under water";
		gills = ",gills";
		scale = ",scale";
		slime = ",slime";
		caviar = ",caviar";
		FishMovement = "swimming";
	}
	void display() override {
		std::cout << ability << FishAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << gills << scale << caviar << std::endl;
	}
	void move() override { 
		std::cout << FishMovement << std::endl;
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
	~fish() override {
		std::cout << "fish class destructor" << std::endl;
	}
};

class LandDweller : public animal {
public:
	std::string LandDwellerAbility;
	std::string teeth;
	std::string legs;
	std::string hand;
	std::string hair;
	std::string LDMovement;
	LandDweller() {
		LandDwellerAbility= ",walk better,more flexible,smarter,wilder";
		teeth = ",teeth";
		legs = ",legs";
		hand = ",hand";
		hair = ",hair";
		LDMovement = "walking/running/jumping";
	}
	void display() override {
		std::cout << ability << LandDwellerAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << std::endl;
	}
	void move() override {
		std::cout << LDMovement << std::endl;
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
	~LandDweller() override {
		std::cout << "LandDweller class destructor" << std::endl;
	}
};

class bird : public animal {
public:
	std::string BirdAbility;
	std::string wing;
	std::string legs;
	std::string feather;
	std::string beak;
	std::string BirdMovement;
	bird() {
		BirdAbility = ",fly,more careful,very fast, good vision";
		wing = ",wing";
		legs = ",legs";
		feather = ",feather";
		beak = ",beak";
		BirdMovement = "Flying";
	}
	void display() override {
		std::cout << ability << BirdAbility << std::endl;
		std::cout << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << wing << legs << feather << beak << std::endl;
	}
	void move() override {
		std::cout << BirdMovement << std::endl;
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
		arr[i]->move();
		std::cout << std::endl;
		std::cout << std::endl;
	}
}