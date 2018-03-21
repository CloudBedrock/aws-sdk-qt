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

#include "listmultipartuploadsrequest.h"
#include "listmultipartuploadsrequest_p.h"
#include "listmultipartuploadsresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  ListMultipartUploadsRequest
 *
 * @brief  Implements Glacier ListMultipartUploads requests.
 *
 * @see    GlacierClient::listMultipartUploads
 */

/**
 * @brief  Constructs a new ListMultipartUploadsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListMultipartUploadsResponse::ListMultipartUploadsResponse(

/**
 * @brief  Constructs a new ListMultipartUploadsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListMultipartUploadsRequest::ListMultipartUploadsRequest(const ListMultipartUploadsRequest &other)
    : GlacierRequest(new ListMultipartUploadsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListMultipartUploadsRequest object.
 */
ListMultipartUploadsRequest::ListMultipartUploadsRequest()
    : GlacierRequest(new ListMultipartUploadsRequestPrivate(GlacierRequest::ListMultipartUploadsAction, this))
{

}

bool ListMultipartUploadsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListMultipartUploadsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListMultipartUploadsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * ListMultipartUploadsRequest::response(QNetworkReply * const reply) const
{
    return new ListMultipartUploadsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListMultipartUploadsRequestPrivate
 *
 * @brief  Private implementation for ListMultipartUploadsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListMultipartUploadsRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public ListMultipartUploadsRequest instance.
 */
ListMultipartUploadsRequestPrivate::ListMultipartUploadsRequestPrivate(
    const GlacierRequest::Action action, ListMultipartUploadsRequest * const q)
    : ListMultipartUploadsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListMultipartUploadsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListMultipartUploadsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListMultipartUploadsRequest instance.
 */
ListMultipartUploadsRequestPrivate::ListMultipartUploadsRequestPrivate(
    const ListMultipartUploadsRequestPrivate &other, ListMultipartUploadsRequest * const q)
    : ListMultipartUploadsPrivate(other, q)
{

}

} // namespace Glacier
} // namespace AWS
