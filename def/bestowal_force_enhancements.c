#include <Travelers.h>
#include <daemon.h>

inherit Travelers_Definition("Bestowal");

void configure() {
    ::configure();
    set_bestowal_name("force enhancements");
    set_bestowal_type(Travelers_Bestowal_Type_Katakacha_Enhancement);
    set_bestowal_rarity(Rarity_Very_Unusual);
    set_bestowal_universality(False);
    set_bestowal_value(Travelers_Bestowal_Value_Low);
    set_bestowal_required_bestowals(({
        "katakacha",
    }));
    set_bestowal_description("the ability to enhance your katakacha with raw cosmic forces");
    set_bestowal_katakacha_damage_types(({
        ({ "void" }),
        ({ "force" }),
        ({ "temporal" }),
    }));
}
