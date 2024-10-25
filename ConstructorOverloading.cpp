class OnlineTicket{
		private:
				string _name,_source,_destination,_mealType;
				int _preference,_age;
				bool i_nsured;
				OnlineTicket(){
						this->_name="";
						this->age=4;
						this->_source="";
						this->_destination="";
						this->_mealTye="Veg";
						this->_preference=0;
						this->_insured=true;
				}

		pubblic:
				
				OnlineTicket(string name,int age,string source,string destination){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
				}
				OnlineTicket(string name,int age,string source,string destination,string mealTye){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
						this->_mealTye=mealTye
				}
				OnlineTicket(string name,int age,string source,string destination,bool insured){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
						this->_insured=insured;
				}
				OnlineTicket(string name,int age,string source,string destination,int  preference){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
						this->_preference=preference;
				}
				OnlineTicket(string name,int age,string source,string destination,string mealTye,int  preference){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
						this->_mealType=mealTye;
						this->_preference=preference;
				}
				OnlineTicket(string name,int age,string source,string destination,string mealTye,int  preference,bool insured){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
						this->_mealType=mealTye;
						this->_preference=preference;
						this->_insured=insured;
				}

};
