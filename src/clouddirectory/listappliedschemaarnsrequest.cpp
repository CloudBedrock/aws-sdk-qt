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

#include "listappliedschemaarnsrequest.h"
#include "listappliedschemaarnsrequest_p.h"
#include "listappliedschemaarnsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListAppliedSchemaArnsRequest
 *
 * @brief  Implements CloudDirectory ListAppliedSchemaArns requests.
 *
 * @see    CloudDirectoryClient::listAppliedSchemaArns
 */

/**
 * @brief  Constructs a new ListAppliedSchemaArnsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAppliedSchemaArnsResponse::ListAppliedSchemaArnsResponse(

/**
 * @brief  Constructs a new ListAppliedSchemaArnsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAppliedSchemaArnsRequest::ListAppliedSchemaArnsRequest(const ListAppliedSchemaArnsRequest &other)
    : CloudDirectoryRequest(new ListAppliedSchemaArnsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAppliedSchemaArnsRequest object.
 */
ListAppliedSchemaArnsRequest::ListAppliedSchemaArnsRequest()
    : CloudDirectoryRequest(new ListAppliedSchemaArnsRequestPrivate(CloudDirectoryRequest::ListAppliedSchemaArnsAction, this))
{

}

bool ListAppliedSchemaArnsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAppliedSchemaArnsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAppliedSchemaArnsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListAppliedSchemaArnsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppliedSchemaArnsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAppliedSchemaArnsRequestPrivate
 *
 * @brief  Private implementation for ListAppliedSchemaArnsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAppliedSchemaArnsRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListAppliedSchemaArnsRequest instance.
 */
ListAppliedSchemaArnsRequestPrivate::ListAppliedSchemaArnsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListAppliedSchemaArnsRequest * const q)
    : ListAppliedSchemaArnsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAppliedSchemaArnsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAppliedSchemaArnsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAppliedSchemaArnsRequest instance.
 */
ListAppliedSchemaArnsRequestPrivate::ListAppliedSchemaArnsRequestPrivate(
    const ListAppliedSchemaArnsRequestPrivate &other, ListAppliedSchemaArnsRequest * const q)
    : ListAppliedSchemaArnsPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
