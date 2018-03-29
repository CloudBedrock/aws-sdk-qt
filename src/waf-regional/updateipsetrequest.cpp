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

#include "updateipsetrequest.h"
#include "updateipsetrequest_p.h"
#include "updateipsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  UpdateIPSetRequest
 *
 * @brief  Implements WAFRegional UpdateIPSet requests.
 *
 * @see    WAFRegionalClient::updateIPSet
 */

/**
 * @brief  Constructs a new UpdateIPSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateIPSetRequest::UpdateIPSetRequest(const UpdateIPSetRequest &other)
    : WAFRegionalRequest(new UpdateIPSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateIPSetRequest object.
 */
UpdateIPSetRequest::UpdateIPSetRequest()
    : WAFRegionalRequest(new UpdateIPSetRequestPrivate(WAFRegionalRequest::UpdateIPSetAction, this))
{

}

bool UpdateIPSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateIPSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateIPSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * UpdateIPSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIPSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateIPSetRequestPrivate
 *
 * @brief  Private implementation for UpdateIPSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIPSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public UpdateIPSetRequest instance.
 */
UpdateIPSetRequestPrivate::UpdateIPSetRequestPrivate(
    const WAFRegionalRequest::Action action, UpdateIPSetRequest * const q)
    : UpdateIPSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIPSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateIPSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateIPSetRequest instance.
 */
UpdateIPSetRequestPrivate::UpdateIPSetRequestPrivate(
    const UpdateIPSetRequestPrivate &other, UpdateIPSetRequest * const q)
    : UpdateIPSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
