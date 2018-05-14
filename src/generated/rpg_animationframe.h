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

#ifndef LCF_RPG_ANIMATIONFRAME_H
#define LCF_RPG_ANIMATIONFRAME_H

// Headers
#include "rpg_base.h"
#include <vector>
#include "rpg_animationcelldata.h"

/**
 * RPG::AnimationFrame class.
 */
namespace RPG {
	class AnimationFrame : public Base {
	public:
		AnimationFrame() {}
		int ID = 0;
		std::vector<AnimationCellData> cells;
		const std::vector<AnimationCellData>& GetCells() const;
		std::vector<AnimationCellData>& GetCells();

	};
}

#endif
