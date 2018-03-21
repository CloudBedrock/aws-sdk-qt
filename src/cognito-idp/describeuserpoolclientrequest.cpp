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

#include "describeuserpoolclientrequest.h"
#include "describeuserpoolclientrequest_p.h"
#include "describeuserpoolclientresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeUserPoolClientRequest
 *
 * @brief  Implements CognitoIdentityProvider DescribeUserPoolClient requests.
 *
 * @see    CognitoIdentityProviderClient::describeUserPoolClient
 */

/**
 * @brief  Constructs a new DescribeUserPoolClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserPoolClientResponse::DescribeUserPoolClientResponse(

/**
 * @brief  Constructs a new DescribeUserPoolClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeUserPoolClientRequest::DescribeUserPoolClientRequest(const DescribeUserPoolClientRequest &other)
    : CognitoIdentityProviderRequest(new DescribeUserPoolClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeUserPoolClientRequest object.
 */
DescribeUserPoolClientRequest::DescribeUserPoolClientRequest()
    : CognitoIdentityProviderRequest(new DescribeUserPoolClientRequestPrivate(CognitoIdentityProviderRequest::DescribeUserPoolClientAction, this))
{

}

bool DescribeUserPoolClientRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeUserPoolClientResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeUserPoolClientResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * DescribeUserPoolClientRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserPoolClientResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeUserPoolClientRequestPrivate
 *
 * @brief  Private implementation for DescribeUserPoolClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserPoolClientRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public DescribeUserPoolClientRequest instance.
 */
DescribeUserPoolClientRequestPrivate::DescribeUserPoolClientRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeUserPoolClientRequest * const q)
    : DescribeUserPoolClientPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserPoolClientRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserPoolClientRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeUserPoolClientRequest instance.
 */
DescribeUserPoolClientRequestPrivate::DescribeUserPoolClientRequestPrivate(
    const DescribeUserPoolClientRequestPrivate &other, DescribeUserPoolClientRequest * const q)
    : DescribeUserPoolClientPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
