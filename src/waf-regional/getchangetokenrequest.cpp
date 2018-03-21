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

#include "getchangetokenrequest.h"
#include "getchangetokenrequest_p.h"
#include "getchangetokenresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetChangeTokenRequest
 *
 * @brief  Implements WAFRegional GetChangeToken requests.
 *
 * @see    WAFRegionalClient::getChangeToken
 */

/**
 * @brief  Constructs a new GetChangeTokenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetChangeTokenResponse::GetChangeTokenResponse(

/**
 * @brief  Constructs a new GetChangeTokenRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetChangeTokenRequest::GetChangeTokenRequest(const GetChangeTokenRequest &other)
    : WAFRegionalRequest(new GetChangeTokenRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetChangeTokenRequest object.
 */
GetChangeTokenRequest::GetChangeTokenRequest()
    : WAFRegionalRequest(new GetChangeTokenRequestPrivate(WAFRegionalRequest::GetChangeTokenAction, this))
{

}

bool GetChangeTokenRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetChangeTokenResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetChangeTokenResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * GetChangeTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetChangeTokenResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetChangeTokenRequestPrivate
 *
 * @brief  Private implementation for GetChangeTokenRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetChangeTokenRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public GetChangeTokenRequest instance.
 */
GetChangeTokenRequestPrivate::GetChangeTokenRequestPrivate(
    const WAFRegionalRequest::Action action, GetChangeTokenRequest * const q)
    : GetChangeTokenPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetChangeTokenRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetChangeTokenRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetChangeTokenRequest instance.
 */
GetChangeTokenRequestPrivate::GetChangeTokenRequestPrivate(
    const GetChangeTokenRequestPrivate &other, GetChangeTokenRequest * const q)
    : GetChangeTokenPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
