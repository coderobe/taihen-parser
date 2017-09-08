#ifndef PARSER_H
#define PARSER_H

#ifdef __cplusplus
extern "C" {
#endif

enum taihen_config_handler_type {
    TAIHEN_CONFIG_DATA_PATH,
    TAIHEN_CONFIG_DATA_ARG,
    TAIHEN_CONFIG_DATA_END
};

typedef void (* taihen_config_handler)(enum taihen_config_handler_type type, const char *data, void *param);

int taihen_config_validate(const char *input);
void taihen_config_parse(const char *input, const char *section, taihen_config_handler handler, void *param);

#ifdef __cplusplus
}
#endif
#endif // PARSER_H
