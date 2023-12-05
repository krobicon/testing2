#pragma once
struct Movement {
    ConfigLoader* cl;
    XDisplay* display;
    Level* level;
    LocalPlayer* localPlayer;

    FloatVector2D previous_weaponPunchAngles;

    Movement(ConfigLoader* cl, XDisplay* display, Level* level, LocalPlayer* localPlayer) {
        this->cl = cl;
        this->display = display;
        this->level = level;
        this->localPlayer = localPlayer;
    }

    void autoTapstrafe(int counter) {
        if (!localPlayer->isGrounded() && counter%10 == 0) {
            printf("not grounded.. \n");
            display->pressW();
        }   
    }
};
