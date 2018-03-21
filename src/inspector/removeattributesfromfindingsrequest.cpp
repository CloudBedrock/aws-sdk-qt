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

#include "removeattributesfromfindingsrequest.h"
#include "removeattributesfromfindingsrequest_p.h"
#include "removeattributesfromfindingsresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  RemoveAttributesFromFindingsRequest
 *
 * @brief  Implements Inspector RemoveAttributesFromFindings requests.
 *
 * @see    InspectorClient::removeAttributesFromFindings
 */

/**
 * @brief  Constructs a new RemoveAttributesFromFindingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveAttributesFromFindingsRequest::RemoveAttributesFromFindingsRequest(const RemoveAttributesFromFindingsRequest &other)
    : InspectorRequest(new RemoveAttributesFromFindingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveAttributesFromFindingsRequest object.
 */
RemoveAttributesFromFindingsRequest::RemoveAttributesFromFindingsRequest()
    : InspectorRequest(new RemoveAttributesFromFindingsRequestPrivate(InspectorRequest::RemoveAttributesFromFindingsAction, this))
{

}

bool RemoveAttributesFromFindingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveAttributesFromFindingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveAttributesFromFindingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * RemoveAttributesFromFindingsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAttributesFromFindingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveAttributesFromFindingsRequestPrivate
 *
 * @brief  Private implementation for RemoveAttributesFromFindingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAttributesFromFindingsRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public RemoveAttributesFromFindingsRequest instance.
 */
RemoveAttributesFromFindingsRequestPrivate::RemoveAttributesFromFindingsRequestPrivate(
    const InspectorRequest::Action action, RemoveAttributesFromFindingsRequest * const q)
    : RemoveAttributesFromFindingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAttributesFromFindingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveAttributesFromFindingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveAttributesFromFindingsRequest instance.
 */
RemoveAttributesFromFindingsRequestPrivate::RemoveAttributesFromFindingsRequestPrivate(
    const RemoveAttributesFromFindingsRequestPrivate &other, RemoveAttributesFromFindingsRequest * const q)
    : RemoveAttributesFromFindingsPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
