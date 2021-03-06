#include <Travelers.h>
#include <daemon.h>

inherit Travelers_Definition("Obstacle");

void configure() {
    ::configure();
    set_obstacle_name("lesser hypospatiality");
    set_obstacle_rarity(Rarity_Rare);
    set_obstacle_value(Travelers_Obstacle_Value_High);
    set_challenge_component_selection_adjustments(([
        "experience"            : 1.00,
        "exploration"           : 0.50,
        "pilgrimage"            : 0.00,
        "quest"                 : 0.00,
        "skill experience"      : 1.00,
        "charity"               : 1.00,
        "neophyte guidance"     : 0.00,
    ]));
    set_obstacle_initialize_display(([
        Message_Content         : ({
            0, ({ "feel", 0 }), ({ 'r', 0, "consciousness" }),
            "contracting, losing the ability to process the third spatial dimension",
        }),
        Message_Color           : "status: loss",
        Message_Senses          : Message_Sense_Spiritual | Message_Sense_Cognitive,
    ]));
    add_obstacle_trait_modifier(([
        Modifier_Index          : ({
            Trait_Hyperspatiality,
        }),
        Modifier_Amount         : -1,
        Modifier_Flags          : Modifier_Flag_Static | Modifier_Flag_Override,
    ]));
    set_obstacle_overcome_display(([
        Message_Content         : ({
            0, ({ "feel", 0 }), ({ 'r', 0, "consciousness" }),
            "expanding to encompass the third spatial dimension once more",
        }),
        Message_Color           : "status: enhancement",
        Message_Senses          : Message_Sense_Spiritual | Message_Sense_Cognitive,
    ]));
}
