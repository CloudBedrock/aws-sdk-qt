/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testawsanonymouscredentials.h"

#include "../../src/core/awsanonymouscredentials.h"

void TestAwsAnonymousCredentials::accessKeyId()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(credentials.accessKeyId().isNull());
}

void TestAwsAnonymousCredentials::secretKey()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(credentials.secretKey().isNull());
}

void TestAwsAnonymousCredentials::token()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(credentials.token().isNull());
}

void TestAwsAnonymousCredentials::expiration()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(credentials.expiration().isNull());
}

void TestAwsAnonymousCredentials::isExpired()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(!credentials.isExpired());
}

void TestAwsAnonymousCredentials::isRefreshable()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(!credentials.isRefreshable());
}

void TestAwsAnonymousCredentials::refresh()
{
    AwsAnonymousCredentials credentials;
    QVERIFY(!credentials.refresh());
}
