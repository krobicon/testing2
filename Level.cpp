#pragma once
struct Level {
	std::string name;
	bool playable;
	bool trainingArea;

	void readFromMemory() {
		name = mem::ReadString(OFF_REGION + OFF_LEVEL, 1024);
		playable = !name.empty() && name != "mp_lobby";
		trainingArea = name == "mp_rr_canyonlands_staging_mu1";
	}
	long getGamemodePointer()
	    {
	        long gamemodePointer = OFF_REGION + OFF_GAMEMODE;
	        return gamemodePointer;
	    }
	std::string getGamemode()
	    {
	        long gamemodePointer = mem::ReadLong(getGamemodePointer()+0x58);
	        std::string result = mem::ReadString(gamemodePointer, 1024);
	        return result;
	    }
	/*void getGamemode() {
		name = mem::ReadString(OFF_REGION + OFF_GAMEMODE, 1024)
		long gamemodePointer = offsets::REGION + offsets::GAMEMODE;
	}*/
};
