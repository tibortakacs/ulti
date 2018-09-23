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

#include <ulti/card.hpp>

namespace ulti
{

///
/// \brief Represents a dealer who randomly deals the cards for the 3 players.
///
class Dealer
{
  public:
    ///
    /// \brief The result of the shuffling and dealing.
    ///
    struct Result
    {
        Cards cards_0; ///< 1st set of cards (10 cards)
        Cards cards_1; ///< 2nd set of cards (10 cards)
        Cards cards_2; ///< 3rd set of cards (10 cards)
        Cards talon; ///< Talon cards (2 cards)
    };

    ///
    /// \brief Shuffles the full deck and deals it for the three players.
    /// \return Dealt set of cards.
    ///
    static Result shuffle_and_deal();
};

} // namespace ulti
