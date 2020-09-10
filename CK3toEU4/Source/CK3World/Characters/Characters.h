#ifndef CK3_CHARACTERS_H
#define CK3_CHARACTERS_H
#include "Parser.h"

namespace CK3
{
class Cultures;
class Faiths;
class Character;
class Characters: commonItems::parser
{
  public:
	Characters() = default;
	Characters(std::istream& theStream);

	[[nodiscard]] const auto& getCharacters() const { return characters; }

	void linkCultures(const Cultures& cultures);
	void linkFaiths(const Faiths& faiths);

  private:
	void registerKeys();

	std::map<int, std::shared_ptr<Character>> characters;
};
} // namespace CK3

#endif // CK3_CHARACTERS_H
