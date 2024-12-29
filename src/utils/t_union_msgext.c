#include "t_union_msgext.h"
#include <furi.h>

TUnionMessageExt* t_union_msgext_alloc() {
    TUnionMessageExt* msg_ext = malloc(sizeof(TUnionMessageExt));

    msg_ext->type_name = furi_string_alloc();
    msg_ext->card_name = furi_string_alloc();
    msg_ext->city_name = furi_string_alloc();

    for(uint8_t i = 0; i < T_UNION_RECORD_TRAVELS_MAX; i++) {
        msg_ext->travels_ext[i].city_name = furi_string_alloc();
        msg_ext->travels_ext[i].station_name = furi_string_alloc();
        msg_ext->travels_ext[i].line_name = furi_string_alloc();
    }

    return msg_ext;
}

void t_union_msgext_free(TUnionMessageExt* msg_ext) {
    t_union_msgext_reset(msg_ext);
    furi_string_free(msg_ext->type_name);
    furi_string_free(msg_ext->card_name);
    furi_string_free(msg_ext->city_name);

    for(uint8_t i = 0; i < T_UNION_RECORD_TRAVELS_MAX; i++) {
        furi_string_free(msg_ext->travels_ext[i].city_name);
        furi_string_free(msg_ext->travels_ext[i].station_name);
        furi_string_free(msg_ext->travels_ext[i].line_name);
    }

    free(msg_ext);
}

void t_union_msgext_reset(TUnionMessageExt* msg_ext) {
    furi_assert(msg_ext);

    furi_string_reset(msg_ext->type_name);
    furi_string_reset(msg_ext->card_name);
    furi_string_reset(msg_ext->city_name);

    for(uint8_t i = 0; i < T_UNION_RECORD_TRAVELS_MAX; i++) {
        furi_string_reset(msg_ext->travels_ext[i].city_name);
        furi_string_reset(msg_ext->travels_ext[i].station_name);
        furi_string_reset(msg_ext->travels_ext[i].line_name);
        msg_ext->travels_ext[i].line_type = LineTypeUnknown;
    }
}