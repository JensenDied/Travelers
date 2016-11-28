#include <daemon.h>
#include <specialty_access.h>
#include <Travelers.h>

inherit Travelers_Definition("Bestowal");

void configure() {
    ::configure();
    set_bestowal_name("lesser mobility");
    set_bestowal_type(Travelers_Bestowal_Type_Specialty_Access);
    set_bestowal_rarity(Rarity_Very_Unusual);
    set_bestowal_universality(False);
    set_bestowal_value(Travelers_Bestowal_Value_Moderate);
    set_bestowal_description("moderately increased mobility");
    set_bestowal_specialty_access(([
        Specialty_Skills                        : Skill_Class(Skill_Class_Movement)->query_skill_class_contents()->query_skill_code(),
        Specialty_Degree                        : 2,
        Specialty_Flags                         : Specialty_Flag_Accumulative_Only,
    ]));
}
