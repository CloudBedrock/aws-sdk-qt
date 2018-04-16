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

#include "adminrespondtoauthchallengerequest.h"
#include "adminrespondtoauthchallengerequest_p.h"
#include "adminrespondtoauthchallengeresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRespondToAuthChallengeRequest
 *
 * \brief The AdminRespondToAuthChallengeRequest class encapsulates CognitoIdentityProvider AdminRespondToAuthChallenge requests.
 *
 * \ingroup CognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminRespondToAuthChallenge
 */

/*!
 * @brief  Constructs a new AdminRespondToAuthChallengeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminRespondToAuthChallengeRequest::AdminRespondToAuthChallengeRequest(const AdminRespondToAuthChallengeRequest &other)
    : CognitoIdentityProviderRequest(new AdminRespondToAuthChallengeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AdminRespondToAuthChallengeRequest object.
 */
AdminRespondToAuthChallengeRequest::AdminRespondToAuthChallengeRequest()
    : CognitoIdentityProviderRequest(new AdminRespondToAuthChallengeRequestPrivate(CognitoIdentityProviderRequest::AdminRespondToAuthChallengeAction, this))
{

}

/*!
 * \reimp
 */
bool AdminRespondToAuthChallengeRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AdminRespondToAuthChallengeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminRespondToAuthChallengeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminRespondToAuthChallengeRequest::response(QNetworkReply * const reply) const
{
    return new AdminRespondToAuthChallengeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AdminRespondToAuthChallengeRequestPrivate
 *
 * @brief  Private implementation for AdminRespondToAuthChallengeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AdminRespondToAuthChallengeRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminRespondToAuthChallengeRequest instance.
 */
AdminRespondToAuthChallengeRequestPrivate::AdminRespondToAuthChallengeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminRespondToAuthChallengeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AdminRespondToAuthChallengeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminRespondToAuthChallengeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminRespondToAuthChallengeRequest instance.
 */
AdminRespondToAuthChallengeRequestPrivate::AdminRespondToAuthChallengeRequestPrivate(
    const AdminRespondToAuthChallengeRequestPrivate &other, AdminRespondToAuthChallengeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
