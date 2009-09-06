/*
History
=======
2005/23/11 MuadDib:   Added warmode_wait timer for changing war mode.
2009/09/03 MuadDib:   Moved combat related settings to Combat Config from SSOPT

Notes
=======

*/

struct CombatConfig {
    bool display_parry_success_messages;
    bool warmode_inhibits_regen;
	bool attack_self;
	unsigned long warmode_delay;

	bool core_hit_sounds;
	bool scripted_attack_checks;
	bool reset_swing_onturn;
	bool send_swing_packet;

};

extern CombatConfig combat_config;
void read_combat_config();