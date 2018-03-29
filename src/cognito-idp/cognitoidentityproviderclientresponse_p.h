/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_COGNITOIDENTITYPROVIDERCLIENTRESPONSE_P_H
#define QTAWS_COGNITOIDENTITYPROVIDERCLIENTRESPONSE_P_H

#include "cognitoidentityproviderresponse.h"
#include "cognitoidentityproviderclientrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CognitoIdentityProviderClientResponse;

class QTAWS_EXPORT CognitoIdentityProviderClientResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {
    Q_OBJECT

public:

    CognitoIdentityProviderClientResponsePrivate(CognitoIdentityProviderClientResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CognitoIdentityProviderClientResponse)
    Q_DISABLE_COPY(CognitoIdentityProviderClientResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
