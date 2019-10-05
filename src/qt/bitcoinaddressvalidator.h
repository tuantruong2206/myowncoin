// Copyright (c) 2011-2014 The Nilabit Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef bitcoin_QT_nilabitADDRESSVALIDATOR_H
#define bitcoin_QT_nilabitADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class nilabitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit nilabitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Nilabit address widget validator, checks for a valid Nilabit address.
 */
class nilabitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit nilabitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // bitcoin_QT_nilabitADDRESSVALIDATOR_H
