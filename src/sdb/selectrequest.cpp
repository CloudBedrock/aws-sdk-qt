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

#include "selectrequest.h"
#include "selectrequest_p.h"
#include "selectresponse.h"
#include "simpledbrequest_p.h"

namespace AWS {
namespace SimpleDB {

/**
 * @class  SelectRequest
 *
 * @brief  Implements SimpleDB Select requests.
 *
 * @see    SimpleDBClient::select
 */

/**
 * @brief  Constructs a new SelectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SelectResponse::SelectResponse(

/**
 * @brief  Constructs a new SelectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SelectRequest::SelectRequest(const SelectRequest &other)
    : SimpleDBRequest(new SelectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SelectRequest object.
 */
SelectRequest::SelectRequest()
    : SimpleDBRequest(new SelectRequestPrivate(SimpleDBRequest::SelectAction, this))
{

}

bool SelectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SelectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SelectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SimpleDBClient::send
 */
AwsAbstractResponse * SelectRequest::response(QNetworkReply * const reply) const
{
    return new SelectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SelectRequestPrivate
 *
 * @brief  Private implementation for SelectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SelectRequestPrivate object.
 *
 * @param  action  SimpleDB action being performed.
 * @param  q       Pointer to this object's public SelectRequest instance.
 */
SelectRequestPrivate::SelectRequestPrivate(
    const SimpleDBRequest::Action action, SelectRequest * const q)
    : SelectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SelectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SelectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SelectRequest instance.
 */
SelectRequestPrivate::SelectRequestPrivate(
    const SelectRequestPrivate &other, SelectRequest * const q)
    : SelectPrivate(other, q)
{

}

} // namespace SimpleDB
} // namespace AWS
