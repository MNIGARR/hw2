#include <iostream>
using namespace std;

class Engine {
	int engine_no;
	string company;
	double volume;
public:
	Engine() {
		engine_no = 0;
		company = "";
		volume = 0;
	}

	Engine(int engine_no, string company, double volume) {
		this->engine_no = engine_no;
		this->company = company;
		this->volume = volume;
	}

	//set, get
	void Setengine_no(int engine_no) {
		this->engine_no = engine_no;
	}
	void SetCompany(string company) {
		this->company = company;
	}
	void SetVolume(double volume) {
		this->volume = volume;
	}
	int Getengine_no() {
		return engine_no;
	}
	string Getcompany() {
		return company;
	}
	double Getvolume() {
		return volume;
	}

	void Show() {
		cout << "Engine No : " << engine_no << "\nCompany : " << company << "\nVolume : " << volume << endl;
	}
};

class MainInfo {
public:
	int id;
	string model;
	string vendor;
	string engine;
	MainInfo() {
		id = 0;
		model = "";
		vendor = "";
		engine = "";
	}
	MainInfo(int id, string model, string vendor, string engine) {
		this->id = id;
		this->model = model;
		this->vendor = vendor;
		this->engine = engine;
	}

	void Show() {
		cout << "Model: " << this->model << endl;
		cout << "Vendor: " << this->vendor << endl;
		cout << "Engine: " << this->engine << endl;
		cout << "Id: " << this->id << endl;
	}
};

class Car : public Engine, public MainInfo{
	bool hasSpoiler;
public:
	Car() : Engine(), MainInfo() {
		this->hasSpoiler = "";
	}
	Car(bool hasSpoiler) {
		SetSpoiler(hasSpoiler);
	}

	//set, get
	void SetSpoiler(bool hasSpoiler) {
		this->hasSpoiler = hasSpoiler;
	}
	bool GetSpoiler()const {
		return hasSpoiler;
	}

	void Show() {
		cout << "Car information:\n";
		cout << "Spoiler (0 = n; 1 = y) : " << GetSpoiler() << endl;
	}
};

class Ship : public Engine, public MainInfo {
	bool hasSail;
public:
	Ship() {
		this->hasSail = " ";
	}
	Ship(bool hasSail) {
		SetSail(hasSail);
	}

	//set, get
	void SetSail(bool hasSail) {
		this->hasSail = hasSail;
	}
	bool GetSail()const {
		return hasSail;
	}

	void Show() {
		cout << "Ship info:\n";
		cout << "Has sail? (0 = n; 1 = y) : " << GetSail() << endl;
	}
};

class Airplane : public Engine, public MainInfo{
	int passengerCapacity;
	int engineCount;
public:
	Airplane() {
		this->passengerCapacity = 0;
		this->engineCount = 1;
	}
	Airplane(int passengerCapacity, int engineCount) {
		SetCapacity(passengerCapacity);
	}

	//set, get
	void SetCapacity(int passengerCapacity) {
		this->passengerCapacity = passengerCapacity;
	}
	void SetEngineCount(int engineCount) {
		this->engineCount = engineCount;
	}

	int getCapacity()const {
		return passengerCapacity;
	}
	int getEngineCount()const {
		return engineCount;
	}
};

void main() {
	//copier->Printer::Start();
	//Car->MainInfo: Show();
	MainInfo (1, "gls450", "mercedes", "mercedes");
	Car bmw(2);
	//xxxxxxxxx
}