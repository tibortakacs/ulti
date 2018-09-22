/***********************************************************************************************************************
 * MIT License
 *
 * Copyright (c) 2018 Tibor Takacs
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS
 * OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 **********************************************************************************************************************/

namespace ulti
{
///
/// \brief Hungarian card's suits.
///
enum class CardSuit
{
    Heart = 0,
    Bell,
    Acorn,
    Leave
};

///
/// \brief Hungarian card's ranks.
///
enum class CardRank
{
    Seven = 0,
    Eight,
    Nine,
    Ten,
    UnderKnave,
    OverKnave,
    King,
    Ace
};

///
/// \brief A class which represents a card of a pile.
///
struct Card final
{
    const CardSuit suit;
    const CardRank rank;

    Card(CardSuit s, CardRank r)
      : suit(s)
      , rank(r)
    {
    }
};
} // namespace ulti
