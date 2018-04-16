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

#include "updategrouprequest.h"
#include "updategrouprequest_p.h"
#include "updategroupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateGroupRequest
 *
 * \brief The UpdateGroupRequest class encapsulates CognitoIdentityProvider UpdateGroup requests.
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
 * \sa CognitoIdentityProviderClient::updateGroup
 */

/*!
 * @brief  Constructs a new UpdateGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGroupRequest::UpdateGroupRequest(const UpdateGroupRequest &other)
    : CognitoIdentityProviderRequest(new UpdateGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateGroupRequest object.
 */
UpdateGroupRequest::UpdateGroupRequest()
    : CognitoIdentityProviderRequest(new UpdateGroupRequestPrivate(CognitoIdentityProviderRequest::UpdateGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGroupRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGroupResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateGroupRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateGroupRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public UpdateGroupRequest instance.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateGroupRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGroupRequest instance.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const UpdateGroupRequestPrivate &other, UpdateGroupRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
