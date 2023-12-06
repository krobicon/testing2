#pragma once
struct Level {
	std::string name;
	bool playable;
	bool trainingArea;
	std::string gamemode;

	void readFromMemory() {
		name = mem::ReadString(OFF_REGION + OFF_LEVEL, 1024);
		playable = !name.empty() && name != "mp_lobby";
		trainingArea = name == "mp_rr_canyonlands_staging_mu1";
	}
	void readGamemode() {
		gamemode = mem::ReadString(OFF_REGION + OFF_LEVEL, 1024);
		//playable = !name.empty() && name != "mp_lobby";
		//trainingArea = name == "mp_rr_canyonlands_staging_mu1";
		std::cout << gamemode << "\n";
	}
	long getGamemodePointer()
	    {
	        long gamemodePointer = OFF_REGION + OFF_GAMEMODE;
	        return gamemodePointer;
	    }
	/*std::string getGamemode()
	    {
	        long gamemodePointer = mem::ReadLong(getGamemodePointer()+0x58);
	        std::string result = mem::ReadString(gamemodePointer, 1024);
	        return result;
	    }
	bool isSpecialMode()
	    {
	        if (getGamemode().compare("control") == 0 || getGamemode().compare("freedm") == 0)
	            return true;
	        return false;
	    }
	/*void getGamemode() {
		name = mem::ReadString(OFF_REGION + OFF_GAMEMODE, 1024)
		long gamemodePointer = offsets::REGION + offsets::GAMEMODE;
	}*/
};
