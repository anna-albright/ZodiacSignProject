/* Horoscope.h
 * Author:     Anna Khanzhina
 * Project:    Final Project
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;
#ifndef HOROSCOPE_H
#define HOROSCOPE_H
#include "Horoscope.h"
// Abstract base class (interface)
class Horoscope {
protected:
	string name;
	string sex;
	int month;
	int day;
	int year;
public:
	void set_cursor(int x , int y )
	{
		HANDLE handle;
		COORD coordinates;
		handle = GetStdHandle(STD_OUTPUT_HANDLE);
		coordinates.X = x;
		coordinates.Y = y;
		SetConsoleCursorPosition(handle, coordinates);
	}
    // pure virtual function providing interface framework.
	// function to print the sign symbol and information about user
	virtual void printSign() = 0;
	// function to print description of personality traits and basic information
	virtual void description()  = 0;
	//function to print lucky numbers
	virtual void luckyNum()  = 0;
	//function to print prediction for 2021
	virtual void prediction()  = 0;
	//function to print love compatibility with other Zodiac signs
	virtual void loveComp()  = 0;
	// Constructor, setter, and getter
	Horoscope(string name, string sex, int month, int day, int year) :
		name(name),
		sex(sex),
		month(month),
		day(day),
		year(year) {};
	void setName(string n) { name = n; }
	void setSex(string s) { sex = s; }
	void setMonth(int m) { month = m; }
	void setDay(int d) { day = d; }
	void setYear(int y) { year = y; }
	string getName() { return name; }
	string getSex() { return sex; }
	int getMonth() { return month; }
	int getDay() { return day; }
	int getYear() { return year; }
};

// Derived classes with ovveride version of all virtual functions
class Aries : public Horoscope {
public:
	    //constructor
	    Aries(string name, string sex, int month, int day, int year) :
		Horoscope(name, sex, month, day, year) {};
	    virtual void printSign() override {
		//drawing the ascii art
		set_cursor(3, 9); cout <<name<< " ,your horoscope sign is Aries-The Ram" << right << setw(20) << "Name: " << name;
		set_cursor(6, 10); cout << ".-.   .-." << right << setw(49) << "Age: " << (2020 - year);
		set_cursor(5, 11); cout << "(_  \\ /  _)" << right << setw(48) << "Sex: " << sex;
		set_cursor(10, 12); cout << "|";
		set_cursor(10, 13); cout << "|\n\n";
	}
		virtual void description()  override {
			cout << name << ", your horoscope sign is Aries." << endl << endl;
			cout <<"Element: Fire\t\t\t\tPolarity: Positive\nQuality : Cardinal\t\t\tRuling Planet : Mars\n";
			cout<<"Ruling House : First\t\t\tSpirit Color : Red\nLucky Gem : Diamond\t\t\tFlower : Thistle & honeysuckle"<<endl<<endl;
			cout << "The first sign of the Zodiac, Aries are the trailblazers. Passionate and independent, Aries will never do something just because everyone else is doing it—a Ram";
			cout << " needs to be 100 percent committed to the task at hand. Competitive to the max, the best way to motivate an Aries is to turn something into a contest.";
			cout << "Aries will put everything they have (and then some) into winning. Loyal, smart, and impulsive, they always have multiple projects on their mind, and won't be satisfied";
			cout << "until their work, social life, and personal lives line up exactly with the dream life they've envisioned. Those who are drawn to magnetic Aries may have trouble keeping";
			cout << " up, but if they can, they'll have a friend for life.";
		}
		virtual void luckyNum()  override {
			cout << name << ", your horoscope sign is Aries." << endl << endl;
			cout << "Your lucky numbers are: 1, 9."<<endl;
		}
		virtual void prediction()  override {
			cout << name << ", your horoscope sign is Aries." << endl<<endl;
			cout << "Prediction for 2021: " << endl;
			cout << "2021 will be a good and successful year that will surprise especially those close to you, who not only once underestimated the Aries.";
			cout << "The year 2021 will turn out to be a social year, in which you will get out of the isolation you have retreated in the year that just passed.";
			cout << "All the barriers will disappear, and your spirit will be free of all the restrictions.You will have unlimited occasions to develop your personal or professional skills."<<endl;
		}
		virtual void loveComp()  override {
			cout << name << " , your horoscope sign is Aries." << endl << endl;
			cout << "Top Love Matches: Sagittarius." << endl;
			cout << "Best Zodiac Love Matches for Aries: Gemini, Libra, Taurus." << endl;
		}

};

class Taurus : public Horoscope {
public:
	//constructor
	Taurus(string name, string sex, int month, int day, int year) :
	Horoscope(name, sex, month, day, year) {};
	virtual void printSign() override {
		//drawing the ascii art
		set_cursor(3, 9); cout << "Your horoscope sign is Taurus-The Bull" << right << setw(20) << "Name: " << name;
		set_cursor(6, 10); cout << ".     ." << right << setw(47) << "Age: " << (2020 - year);
		set_cursor(6, 11); cout << "'.___.'" << right << setw(48) << "Sex: " << sex;
		set_cursor(6, 12); cout << ".'   `.";
		set_cursor(5, 13); cout << ":       :";
		set_cursor(5, 14); cout << ":       :";
		set_cursor(6, 15); cout << "`.___.'\n\n";
	}
	virtual void description()  override {
		cout << name << ", your horoscope sign is Taurus." << endl<<endl;
		cout << "Element: Earth\t\t\t\tPolarity: Negative\nQuality : Fixed\t\t\t\tRuling Planet : Venus\nRuling House : Second\t\t\tSpirit Color : Pink\n";
		cout<<"Lucky Gem : Emerald\t\t\tFlower : Rose, Poppy, & Foxglove"<<endl;
		cout << "Smart, ambitious, and trustworthy, Taurus is the anchor of the Zodiac. Amazing friends, colleagues, and partners, Taureans value honesty above all else and are proud that";
		cout << "their personal relationships tend to be drama free.Bulls get the reputation of being stubborn, but they're not always stuck in their ways. This searching sign is willing";
		cout << "to see another point of view, but they won't flip - flop on an opinion just to make someone else happy.They will shift their thinking only if they truly have a change of";
		cout << "heart." << endl;
	}
	virtual void luckyNum()  override {
		cout << name << ", your horoscope sign is Taurus." << endl << endl;
		cout << "Your lucky numbers are: 2, 4, 6, 11." << endl;
	}
	virtual void prediction()  override {
		cout << name << ", your horoscope sign is Taurus." << endl << endl;
		cout << "Prediction for 2021: " << endl;
		cout << "Those born in the Taurus zodiac sign will have an excellentand lucky year in terms of sentimental but also professional life.The year 2021 will be marked by a change ";
		cout << "in these sectors. February, April, and May are the best months to explore new places and try to gain as much knowledge as possible." << endl;
	}
	virtual void loveComp()  override {
		cout << name << ", your horoscope sign is Taurus." << endl << endl;
		cout << "Top Love Matches: Cancer & Virgo " << endl;
		cout << "Best Zodiac Love Matches for Taurus: Pisces, Capricorn."<<endl;
	}

};
class Gemini : public Horoscope {
public:
	//constructor
	Gemini(string name, string sex, int month, int day, int year) :
	Horoscope(name, sex, month, day, year) {};
	virtual void printSign()  override {
		//drawing the ascii art
		set_cursor(3, 9); cout << "Your horoscope sign is Gemini-The Twins"<<right << setw(20)<< "Name: " << name;
		set_cursor(5, 10); cout << "._____."<<right << setw(49) << "Age: "<< (2020-year);
		set_cursor(7, 11); cout << "| |" << right << setw(51)<< "Sex: " << sex;
		set_cursor(7, 12); cout << "| |";
		set_cursor(7, 13); cout << "| |";
		set_cursor(6, 14); cout << "_|_|_";
		set_cursor(5, 15); cout << "'     `\n\n";
	}
	virtual void description()  override {
		cout << name << ", your horoscope sign is Gemini" << endl<<endl;
		cout << "Element: Air\t\t\t\tPolarity: Positive\nQuality : Mutable\t\t\tRuling Planet : Mercury\nRuling House : Third\t\t\tSpirit Color : Yellow\n";
		cout<<"Lucky Gem : Tiger's Eye & Emerald\tFlower : Lavender & Lily of the Valley"<<endl;
		cout << "Smart, passionate, and dynamic, Gemini is characterized by the Twins, Castor and Pollux, and is known for having two different sides they can display to the world. Expert";
		cout << "communicators, Gemini is the chameleon of the Zodiac, adept at blending into different groups based on the vibeand energy they perceive.While they're also amazing at";
		cout << "showcasing surface traits, the Gemini well runs deep, which is why the Twins are one of the Zodiac's most emotionally intelligent signs." << endl;
	}
	virtual void luckyNum()  override {
		cout << name << ", your horoscope sign is Gemini" << endl << endl;
		cout << "Your lucky numbers are: 2, 8, 12, 23." << endl;
	}
	virtual void prediction()  override {
		cout << name << ", your horoscope sign is Gemini" << endl << endl;
		cout << "Prediction for 2021: " << endl;
		cout << "2021 is a lucky year, announcing a happy family life, a tenacious approach to all the purposes and dreams, and the need to evolve professionally. ";
		cout << "In all honesty, this is not going to be an easy year, but it will bring a lot of satisfaction to Gemini, and Augustand September are the best months to succeed in";
		cout << "finalizing everything you plan on doing." << endl;
	}
	virtual void loveComp()  override {
		cout << name << ", your horoscope sign is Gemini" << endl << endl;
		cout << "Top Love Matches: Aries & Leo." << endl;
		cout << "Best Zodiac Love Matches for Gemini: Libra." << endl;
	}

};
class Cancer : public Horoscope {
public:
	//constructor
	Cancer(string name, string sex, int month, int day, int year) :
	Horoscope(name, sex, month, day, year) {};
	virtual void printSign()  override {
		//drawing the ascii art
		set_cursor(3, 9); cout << "Your horoscope sign is Cancer-The Crab" << right << setw(20) << "Name: " << name;
		set_cursor(8, 10); cout << ".--." << right << setw(48) << "Age: " << (2020 - year);
		set_cursor(7, 11); cout << "/   _`." << right << setw(46) << "Sex: " << sex;
		set_cursor(6, 12); cout << "(_) ( )";
		set_cursor(5, 13); cout << "'.    /";
		set_cursor(5, 14); cout << "  `--'\n\n";
	}
	virtual void description()  override {
		cout << name << ", your horoscope sign is Cancer" << endl<<endl;
		cout << "Element: Water\t\t\tPolarity: Negative\nQuality : Cardinal\t\tRuling Planet : Moon\nRuling House : Fourth\t\tSpirit Color : Violet\n";
		cout << "Lucky Gem : Ruby, pearl\t\tFlower : Orchid and white rose" << endl;
		cout << "Emotional, intuitive, and practically psychic; ruled by the moon and characterized by the crab, Cancer has so much going on in its watery depths. Cancers may seem prickly";
		cout << "and standoffish at first meeting, once they make the decision to become friends with someone, that person has a friend for life." << endl;
	}
	virtual void luckyNum()  override {
		cout << name << ", your horoscope sign is Cancer" << endl << endl;
		cout << "Your lucky numbers are: 2, 7, 11, 16, 20, 25." << endl;
	}
	virtual void prediction()  override {
		cout << name << ", your horoscope sign is Cancer" << endl << endl;
		cout << "2021 is going to be a lucky year for Cancers, and they will be able to achieve all the goals they establish for themselves. However, to reach these goals, the Cancers need";
		cout << "to learn how to harmonize their emotionsand no longer doubt their skills. In June and August, you have all the chances on your side, and you will manage to fulfill all";
		cout << "your goals, even those more complex, due to your tenacity, optimism, and ambition." << endl;
	}
	virtual void loveComp()  override {
		cout << name << ", your horoscope sign is Cancer" << endl << endl;
		cout << "Top Love Matches: Taurus & Pisces." << endl;
		cout << "Best Zodiac Love Matches for Cancer: Scorpio." << endl;
	}

};

class Leo : public Horoscope {
public:
	//constructor
	Leo(string name, string sex, int month, int day, int year) :
	Horoscope(name, sex, month, day, year) {};
	virtual void printSign()  override {
		//drawing the ascii art
		set_cursor(3, 9); cout << "Your horoscope sign is Leo-The Lion" << right << setw(20) << "Name: " << name;
		set_cursor(7, 10); cout << ".--." << right << setw(46) << "Age: " << (2020 - year);
		set_cursor(6, 11); cout << "(    )" << right << setw(45) << "Sex: " << sex;
		set_cursor(5, 12); cout << "(_)  /";
		set_cursor(9, 13); cout << "(_,\n\n";
	}
	virtual void description()  override {
		cout << name << ", your horoscope sign is Leo" << endl<<endl;
		cout << "Element: Fire\t\t\tPolarity: Positive\nQuality : Fixed\t\t\tRuling Planet : Sun\nRuling House : Fifth\t\tSpirit Color : Gold\n";
		cout << "Lucky Gem : Carnelian\t\tFlower : Sunflower & marigold" << endl;
		cout << "Bold, intelligent, warm, and courageous, fire sign Leo is a natural leader of the Zodiac, ready to blaze a trail, vanquish injustice, and make a name for themselves along";
		cout << "the way.Blessed with high self - esteem, Lions know that they possess enviable traits—and they're proud of them. They don't believe in false modesty and will be the first";
		cout << "to praise themselves for a job well done.But Leo isn't self-aggrandizing or unwilling to roll up those sleeves and do the work: this sign knows that in order to be ";
		cout << "respectedand admired, he or she needs to put in the effort worthy of a leader." << endl;
	}
	virtual void luckyNum()  override {
		cout << name << ", your horoscope sign is Leo" << endl << endl;
		cout << "Your lucky numbers are: 1, 4, 10, 13, 19, 22." << endl;
	}
	virtual void prediction() override {
		cout << name << ", your horoscope sign is Leo" << endl << endl;
		cout << "For the Leos, 2021 will be a year of new projects, opportunities, and new horizons. Your business flair will be very sharp, and you can take advantage of different";
		cout << "facilities.You will be more patient, more perspicacious, and tenacious.You will treat all the aspects, both privateand professional, with a lot of responsibility."; 
		cout << "The planetary aspects of March and April will make the Leos very creative, original, and inclined towards discoveries.Also, those who work in the research domain are very";
		cout << "likely to obtain unexpectedly good results.You can count on your intuition since it seems like you don’t fail by following your heart." << endl;
	}
	virtual void loveComp()  override {
		cout << name << ", your horoscope sign is Leo" << endl << endl;
		cout << "Top Love Matches: Libra." << endl;
		cout << "Best Zodiac Love Matches for Leo: Scorpio, Aries, Pisces." << endl;
	}

};

class Virgo : public Horoscope {
public:
	//constructor
	Virgo(string name, string sex, int month, int day, int year) :
		Horoscope(name, sex, month, day, year) {};
	virtual void printSign()  override {
		//drawing the ascii art
		set_cursor(3, 9); cout << "Your horoscope sign is Virgo-The Virgin" << right << setw(20) << "Name: " << name;
		set_cursor(6, 10); cout << "_" << right << setw(54) << "Age: " << (2020 - year);
		set_cursor(5, 11); cout << "' `:--.--." << right << setw(46) << "Sex: " << sex;
		set_cursor(8, 12); cout << "|  |  |_";
		set_cursor(8, 13); cout << "|  |  | )";
		set_cursor(8, 14); cout << "|  |  |/";
		set_cursor(13, 15); cout << "(J\n\n";
	}
	virtual void description()  override {
		cout << name << ", your horoscope sign is Virgo" << endl<<endl;
		cout << "Element: Earth\t\t\tPolarity: Negative\nQuality : Mutable\t\tRuling Planet : Mercury\nRuling House : Sixth\t\t";
		cout << "Spirit Color : Silver\nLucky Gem : Peridot\t\tFlower : Sunflower & marigold" << endl;
		cout << "Smart, sophisticated, and kind, Virgo gets the job done without complaining. Virgos are amazing friends, always there to lend a hand and also lend advice. Practical Virgos";
		cout << "are incredibly adept at big picture thinking, and planning out their life, their vacations, and what they're going to do today isn't a drag it makes them feel in control";
		cout << "and secure." << endl;
	}
	virtual void luckyNum()  override {
		cout << name << ", your horoscope sign is Virgo" << endl << endl;
		cout << "Your lucky numbers are: 5, 14, 23, 32, 41, 50." << endl;
	}
	virtual void prediction()  override {
		cout << name << ", your horoscope sign is Virgo" << endl << endl;
		cout << "For the Leos, 2021 will be a year of new projects, opportunities, and new horizons. Your business flair will be very sharp, and you can take advantage of different";
		cout << "facilities.You will be more patient, more perspicacious, and tenacious.You will treat all the aspects, both privateand professional, with a lot of responsibility."<<endl;
		cout << "The planetary aspects of March and April will make the Leos very creative, original, and inclined towards discoveries.Also, those who work in the research domain are very";
		cout << "likely to obtain unexpectedly good results.You can count on your intuition since it seems like you don’t fail by following your heart." << endl;
	}
	virtual void loveComp()  override {
		cout << name << ", your horoscope sign is Virgo" << endl << endl;
		cout << "Top Love Matches: Cancer." << endl;
		cout << "Best Zodiac Love Matches for Virgo: Taurus, Capricon." << endl;
	}

};

class Libra : public Horoscope {
public:
	//constructor
	Libra(string name, string sex, int month, int day, int year) :
		Horoscope(name, sex, month, day, year) {};
	virtual void printSign()  override {
		//drawing the ascii art
		set_cursor(3, 2); cout << "Your horoscope sign is Libra-The Balance" << right << setw(20) << "Name: " << name;
		set_cursor(10, 3); cout << "__" << right << setw(50) << "Age: " << (2020 - year);
		set_cursor(5, 4); cout << "___.'  '.___" << right << setw(45) << "Sex: " << sex;
		set_cursor(5, 5); cout << "____________\n\n";
	}
	virtual void description()  override {
		cout << name << ", your horoscope sign is Libra" << endl<<endl;
		cout << "Element: Air\t\t\tPolarity: Positive\nQuality : Cardinal\t\tRuling Planet : Venus\nRuling House : Seventh\t\tSpirit Color : Blue\n";
		cout << "Lucky Gem : Sapphire\t\tFlower : Rose"<<endl;
		cout << "Intelligent, kind, and always willing to put others before themselves, Libras value harmony in all forms. Ruled by Venus, the planet of beauty, Libra adores a life that";
		cout << "looks good.As the master of compromiseand diplomacy, Libra is adept at seeing all points of view, and excels at crafting compromisesand effecting mediation between others.";
		cout << "This sign has a rich inner life yet loves other people, and they're always happiest with a large group of friends, family, and coworkers on whom they can count." << endl;
	}
	virtual void luckyNum() override {
		cout << name << ", your horoscope sign is Libra" << endl << endl;
		cout << "Your lucky numbers are: 6, 15, 24, 33, 42." << endl;
	}
	virtual void prediction()  override {
		cout << name << ", your horoscope sign is Libra" << endl << endl;
		cout << "The year 2021 is very fortunate, the doors to success are wide open, and opportunities for advancement, expansion, and prestige can occur at any moment." << endl;
		cout << "In March and April, the pressure gets reduced, collaborations get improved, projects involving groups, auditory, the public may occur, and you enjoy popularityand support." << endl;
	}
	virtual void loveComp() override {
		cout << name << ", your horoscope sign is Libra" << endl << endl;
		cout << "Top Love Matches: Gemini." << endl;
		cout << "Best Zodiac Love Matches for Libra, Aquarius, Sagittarius." << endl;
	}

};

class Scorpio : public Horoscope {
public:
	//constructor
	Scorpio(string name, string sex, int month, int day, int year) :
		Horoscope(name, sex, month, day, year) {};
	virtual void printSign()  override {
		//drawing the ascii art
		set_cursor(3, 9); cout << "Your horoscope sign is Scorpius-The Scorpion" << right << setw(20) << "Name: " << name;
		set_cursor(6, 10); cout << "_" << right << setw(59) << "Age: " << (2020 - year);
		set_cursor(5, 11); cout << "' `:--.--." << right << setw(51) << "Sex: " << sex;
		set_cursor(8, 12); cout << "|  |  |";
		set_cursor(8, 13); cout << "|  |  |";
		set_cursor(8, 14); cout << "|  |  |  ..,";
		set_cursor(14, 15); cout << "`---':";
	}
	virtual void description()  override {
		cout << name << ", your horoscope sign is Scorpio" << endl << endl;
		cout << "Element: Water\t\t\tPolarity: Negative\nQuality : Fixed\t\t\tRuling Planet : Pluto, Mars\nRuling House : Eighth\t\tSpirit Color : Black\n";
		cout << "Lucky Gem : Topaz & opal\tFlower : Hibiscus & geraniums" << endl;
		cout << "Passionate, independent, and unafraid to blaze their own trail no matter what others think, Scorpios make a statement wherever they go. They love debates, aren't afraid";
		cout << "of controversy, and won't back down from a debate. They also hate people who aren't genuine, and are all about being authentic—even if authentic isn't pretty." << endl;
			
	}
	virtual void luckyNum()  override {
		cout << name << ", your horoscope sign is Scorpio" << endl << endl;
		cout << "Your lucky numbers are: 9, 18, 27, 36, 45, 54." << endl;
	}
	virtual void prediction()  override {
		cout << name << ", your horoscope sign is Scorpio" << endl << endl;
		cout << "All the people born under the Scorpio sign should rejoice. 2021 is the year of change for them. This year will be generous, allowing them to consolidate all life domains.";
		cout << "Love, work, ambitions… you are blessed with plenty of luck.\nThe luckiest months for Scorpios are April, May, and August of 2021." << endl;
	}
	virtual void loveComp()  override {
		cout << name << ", your horoscope sign is Scorpio" << endl << endl;
		cout << "Top Love Matches: Cancer." << endl;
		cout << "Best Zodiac Love Matches for Scorpio: Taurus, Aquarius." << endl;
	}

};

class Saggitarius : public Horoscope {
public:
	//constructor
	Saggitarius(string name, string sex, int month, int day, int year) :
		Horoscope(name, sex, month, day, year) {};
	virtual void printSign()  override {
		//drawing the ascii art
		set_cursor(3, 9); cout << "Your horoscope sign is Sagittarius-  The Archer" << right << setw(20) << "Name: " << name;
		set_cursor(11, 10); cout << "..." << right << setw(55) << "Age: " << (2020 - year);
		set_cursor(11, 11); cout << ".':" << right << setw(55) << "Sex: " << sex;
		set_cursor(9, 12); cout << ".'";
		set_cursor(5, 13); cout << "`..'";
		set_cursor(5, 14); cout << ".'`.\n\n";
	}
	virtual void description()  override {
		cout << name << ", your horoscope sign is Saggitarius" << endl<<endl;
		cout << "Element: Fire\t\t\tPolarity: Positive\nQuality : Mutable\t\tRuling Planet : Jupiter\nRuling House : Ninth\t\t";
		cout<< "Spirit Color : Light Blue\nLucky Gem : Topaz\t\tFlower : Carnations & crocuses"<<endl;
		cout << "Independent and strong-willed, Sagittarius personalities are all about going off the beaten path. Sagittarius isn’t afraid to step away from the pack, and is a natural born";
		cout << "leader who goes after what he or she wants, regardless of what other people think.Sagittarius is a born adventurer, and loves solo traveland exploration.Sagittarius also";
		cout << "loves exploring the inner workings of their minds, and love stretching their horizons through a good book or movie." << endl;
			
	}
	virtual void luckyNum()  override {
		cout << name << ", your horoscope sign is Saggitarius" << endl << endl;
		cout << "Your lucky numbers are: 3, 12, 21, 30." << endl;
	}
	virtual void prediction()  override {
		cout << name << ", your horoscope sign is Saggitarius" << endl << endl;
		cout << "2021 might be a year the Sagittarius will love in all regards, a year full of fortune. The protective Jupiter invites them to travel, and Uranus will come with some surprises";
		cout << "in love.The people born in this zodiac sign may even display creative talent.\nSeptember and October could bring for most Sagittarius a new direction in love, such as a ";
		cout << "real estate acquisition, changing, or building a house." << endl;
	}
	virtual void loveComp()override {
		cout << name << ", your horoscope sign is Saggitarius" << endl << endl;
		cout << "Top Love Matches: Aries." << endl;
		cout << "Best Zodiac Love Matches for Sagittarius: Leo, Aquarius. " << endl;
	}

};
//capricorn
class Capricorn : public Horoscope {
public:
	//constructor
	Capricorn(string name, string sex, int month, int day, int year) :
		Horoscope(name, sex, month, day, year) {};
	virtual void printSign()  override {
		//drawing the ascii art
		set_cursor(3, 9); cout << "Your horoscope sign is Capricorn-  The Goat" << right << setw(20) << "Name: " << name;
		set_cursor(13, 10); cout << "_" << right << setw(51) << "Age: " << (2020 - year);
		set_cursor(5, 11); cout << "\\      /_)" << right << setw(50) << "Sex: " << sex;
		set_cursor(6, 12); cout << "\\    /`.";
		set_cursor(7, 13); cout << "\\  /   ;";
		set_cursor(8, 14); cout << "\\/ __.'\n\n";
	}
	virtual void description() override {
		cout << name << ", your horoscope sign is Capricorn" << endl<<endl;
		cout << "Element: Earth\t\t\tPolarity: Negative\nQuality : Cardinal\t\tRuling Planet : Saturn\nRuling House : Tenth\t\tSpirit Color : Dark blue\n";
		cout << "Lucky Gem : Lapis lazuli\tFlower : Pansy"<<endl;
		cout << "Smart, hardworking, and fully in control of their destiny, a Capricorn will always get what they set their mind to, in both personal and professional life—no excuses.";
		cout << "Capricorns may get a reputation as stubborn, but they simply know what they want, and also know how they wish other people would behave." << endl;
	}
	virtual void luckyNum() override {
		cout << name << ", your horoscope sign is Capricorn" << endl << endl;
		cout << "Your lucky numbers are: 1, 4, 8, 10, 13, 17, 19." << endl;
	}
	virtual void prediction() override {
		cout << name << ", your horoscope sign is Capricorn" << endl << endl;
		cout << "The year 2021 seems to be lucky for the people born in the Capricorn sign. They will work hard, and they will develop their innate skills. They have impressive ambitions";
		cout << "that will get fulfilled this year.\nMarch and April will bring surprising earnings from the less expected places." << endl;
	}
	virtual void loveComp()override {
		cout << name << ", your horoscope sign is Capricorn" << endl << endl;
		cout << "Top Love Matches: Virgo." << endl;
		cout << "Best Zodiac Love Matches for Capricorn: Taurus, Pisces." << endl;
	}

};

class Aquarius : public Horoscope {
public:
	//constructor
	Aquarius(string name, string sex, int month, int day, int year) :
		Horoscope(name, sex, month, day, year) {};
	virtual void printSign()  override {
		//drawing the ascii art
		set_cursor(3, 9); cout<< "Your horoscope sign is Aquarius-The Water Bearer" << right << setw(20) << "Name: " << name;
		set_cursor(5, 10); cout << "..-\"-._.-\"-._.-" << right << setw(50) << "Age: " << (2020 - year);
		set_cursor(5, 11); cout << "..-\"-._.-\"-._.-" << right << setw(50) << "Sex: " << sex;
	}
	virtual void description()  override {
		cout << name << ", your horoscope sign is Aquarius" << endl<<endl;
		cout << "Element: Air\t\t\tPolarity: Positive\nQuality : Fixed\t\t\tRuling Planet : Uranus\nRuling House : Eleventh\t\tSpirit Color : Sky blue\n";
		cout<<"Lucky Gem : Amethyst\t\tFlower : Orchid."<<endl;
		cout << "Independent and enigmatical, Aquarians are unique. There is no one quite like an Aquarius, and because each is so incredibly individual, it can be tough to describe them";
		cout << "as a group.Aquarians don't like labels, and may shy away from any adjective—even the good ones you might bestow upon them. Aquarians believe in the nature of change and";
		cout << "evolution, and even though they're a fixed sign, they may not necessarily believe they are the same people they were when they were born." << endl;
	}
	virtual void luckyNum() override {
		cout << name << ", your horoscope sign is Aquarius" << endl << endl;
		cout << "Your lucky numbers are: 4, 8, 13, 17, 22." << endl;
	}
	virtual void prediction()  override {
		cout << name << ", your horoscope sign is Aquarius" << endl << endl;
		cout << "The year 2021 will be lucky and full of adventure for those born in the Aquarius zodiac sign. If until now, you preferred the peaceful atmosphere from home, in 2021,";
		cout << "the focus will be on travels, and you will need to get ready because unprecedented adventures are waiting for you." << endl;
		cout << "The lucky months of the year are Mayand November, and during these months, you are likely to buy a house, an apartment, or a piece of land, and the collaboration with";
		cout << "the representatives of other zodiac signs will go smoothly." << endl;
	}
	virtual void loveComp() override {
		cout << name << ", your horoscope sign is Aquarius" << endl << endl;
		cout << "Top Love Matches: Sagittarius." << endl;
		cout << "Best Zodiac Love Matches for Aquarius: Gemini, Aquarius." << endl;
	}

};

class Pisces : public Horoscope {
public:
	//constructor
	Pisces(string name, string sex, int month, int day, int year) :
		Horoscope(name, sex, month, day, year) {};
	virtual void printSign()  override {
		//drawing the ascii art
		set_cursor(3, 9); cout << "Your horoscope sign is Pisces-The Fishes" << right << setw(20) << "Name: " << name;
		set_cursor(5, 10); cout << "`-.    .-'" << right << setw(47) << "Age: " << (2020 - year);
		set_cursor(8, 11); cout << ":  :" << right << setw(50) << "Sex: " << sex;
		set_cursor(6, 12); cout << "--:--:--";
		set_cursor(8, 13); cout << ":  :";
		set_cursor(5, 14); cout << ".-`    `-.\n\n";
	}
	virtual void description()  override {
		cout << name << ", your horoscope sign is Pisces" << endl << endl;
		cout << "Element: Water\t\t\tPolarity: Negative\nQuality : Mutable\t\tRuling Planet : Neptune\nRuling House : Twelfth\t\t";
		cout << "Spirit Color : Sea green\nLucky Gem : Moonstone\t\tFlower : Water lily"<<endl;
		cout << "Smart, creative, and deeply intuitive, Pisces can be close to psychic.Pisces feel things deeply, and have incredibly strong gut reactions.A Pisces knows things from deep";
		cout << "within, and can often judge whether a person or situation is good or bad.That doesn't mean a Pisces ignores the logical part of their brain, though. Deeply intelligent,";
		cout << "Pisces have a profound respect for the power of the human mind.Is it a surprise that Albert Einstein was a Pisces ?"<<endl;
	}
	virtual void luckyNum() override {
		cout << name << ", your horoscope sign is Pisces" << endl << endl;
		cout << "Your lucky numbers are: 3, 7, 12, 16, 21, 25." << endl;
	}
	virtual void prediction()  override {
		cout << name << ", your horoscope sign is Pisces" << endl << endl;
		cout << "The year 2021 is going to be very lucky and dynamic for the people born in the Pisces sign, in all spheres of life.This year will be full of events." << endl;
		cout << "In terms of lucky months, the people born in the Pisces sign have all the chances to earn unworked money in Novemberand December.The Pisces will also be fortunate in";
		cout << "March and April." << endl;
	}
	virtual void loveComp()  override {
		cout << name << ", your horoscope sign is Pisces" << endl << endl;
		cout << "Top Love Matches: Virgo." << endl;
		cout << "Best Zodiac Love Matches for Pisces: Scorpio, Pisces." << endl;
	}

};
#endif
