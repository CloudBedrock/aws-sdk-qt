/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_COGNITOIDENTITYPROVIDERCLIENTREQUEST_P_H
#define QTAWS_COGNITOIDENTITYPROVIDERCLIENTREQUEST_P_H

#include "cognitoidentityprovider_p.h"
#include "cognitoidentityproviderclientrequest.h"

namespace AWS {

namespace CognitoIdentityProvider {

class CognitoIdentityProviderClientRequest;

class QTAWS_EXPORT CognitoIdentityProviderClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    CognitoIdentityProviderClientRequest::Action action; ///< CognitoIdentityProvider action to be performed.
    QString apiVersion;        ///< CognitoIdentityProvider API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CognitoIdentityProvider request (query string) parameters. @todo?

    CognitoIdentityProviderClientRequestPrivate(const CognitoIdentityProviderClientRequest::Action action, CognitoIdentityProviderClientRequest * const q);
    CognitoIdentityProviderClientRequestPrivate(const CognitoIdentityProviderClientRequestPrivate &other, CognitoIdentityProviderClientRequest * const q);

    static QString toString(const CognitoIdentityProviderClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CognitoIdentityProviderClientRequest)

};

} // namespace CognitoIdentityProvider
} // namespace AWS

#endif
