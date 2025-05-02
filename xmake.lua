add_rules("mode.debug", "mode.release")

target("xmacros")
    set_kind("headeronly")
    set_languages("clatest")
    add_headerfiles("include/(**.h)")
