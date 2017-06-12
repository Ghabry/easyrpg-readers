/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_ANIMATIONTIMING_H
#define LCF_RPG_ANIMATIONTIMING_H

// Headers
#include "rpg_sound.h"

/**
 * RPG::AnimationTiming class.
 */
namespace RPG {
	class AnimationTiming {
	public:
		enum FlashScope {
			FlashScope_nothing = 0,
			FlashScope_target = 1,
			FlashScope_screen = 2
		};
		enum ScreenShake {
			ScreenShake_nothing = 0,
			ScreenShake_target = 1,
			ScreenShake_screen = 2
		};

		int ID = 0;
		int frame = 0;
		Sound se;
		int flash_scope = 0;
		int flash_red = 31;
		int flash_green = 31;
		int flash_blue = 31;
		int flash_power = 31;
		int screen_shake = 0;
        int GetFrame() const;
        void SetFrame(int frame);

        const Sound& GetSe() const;
        Sound& GetSe();
        void SetSe(const Sound& se);

        int GetFlashScope() const;
        void SetFlashScope(int flash_scope);

        int GetFlashRed() const;
        void SetFlashRed(int flash_red);

        int GetFlashGreen() const;
        void SetFlashGreen(int flash_green);

        int GetFlashBlue() const;
        void SetFlashBlue(int flash_blue);

        int GetFlashPower() const;
        void SetFlashPower(int flash_power);

        int GetScreenShake() const;
        void SetScreenShake(int screen_shake);

	};
}

#endif
