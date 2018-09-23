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

#include "dealer.hpp"

#include <algorithm>

namespace ulti
{
constexpr int NUMBER_OF_PLAYER_CARDS = 10;

///
/// \brief Creates a new full deck. The deck is ordered.
/// \return Full deck.
///
Cards
create_deck()
{
    Cards deck;
    deck.reserve(static_cast<int>(CardSuit::__Size) * static_cast<int>(CardRank::__Size));

    for (int suit = 0; suit < static_cast<int>(CardSuit::__Size); ++suit)
    {
        for (int rank = 0; rank < static_cast<int>(CardRank::__Size); ++rank)
        {
            deck.emplace_back(static_cast<CardSuit>(suit), static_cast<CardRank>(rank));
        }
    }

    return deck;
}

Dealer::Result
Dealer::shuffle_and_deal()
{
    auto deck = create_deck();

    std::random_shuffle(deck.begin(), deck.end());

    Result result{Cards(deck.begin(), deck.begin() + NUMBER_OF_PLAYER_CARDS),
                  Cards(deck.begin() + NUMBER_OF_PLAYER_CARDS, deck.begin() + NUMBER_OF_PLAYER_CARDS * 2),
                  Cards(deck.begin() + NUMBER_OF_PLAYER_CARDS * 2, deck.begin() + NUMBER_OF_PLAYER_CARDS * 3),
                  Cards(deck.begin() + NUMBER_OF_PLAYER_CARDS * 3, deck.end())};

    return result;
}

} // namespace ulti
