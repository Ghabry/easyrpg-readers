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

#ifndef LCF_RPG_ENCOUNTER_H
#define LCF_RPG_ENCOUNTER_H

/**
 * RPG::Encounter class.
 */
namespace RPG {
	class Encounter : public Base {
	public:
		Encounter() {}
		int ID = 0;
		int32_t troop_id = 0;
		const int32_t& GetTroopId() const;
		int32_t& GetTroopId();
		void SetTroopId(const int32_t& troop_id);

	};
}

#endif
