#ifndef GAME_OF_LIFE_CONFIG
#define GAME_OF_LIFE_CONFIG

#ifdef _MSC_VER
#ifdef GAME_OF_LIFE_EXPORTS
#define GAME_OF_LIFE_API __declspec(dllexport)
#else
#define GAME_OF_LIFE_API __declspec(dllimport)
#endif
#else
#define GAME_OF_LIFE_API
#endif

#endif // GAME_OF_LIFE_CONFIG
