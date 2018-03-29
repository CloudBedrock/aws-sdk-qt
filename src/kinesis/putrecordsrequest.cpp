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

#include "putrecordsrequest.h"
#include "putrecordsrequest_p.h"
#include "putrecordsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/**
 * @class  PutRecordsRequest
 *
 * @brief  Implements Kinesis PutRecords requests.
 *
 * @see    KinesisClient::putRecords
 */

/**
 * @brief  Constructs a new PutRecordsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRecordsRequest::PutRecordsRequest(const PutRecordsRequest &other)
    : KinesisRequest(new PutRecordsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutRecordsRequest object.
 */
PutRecordsRequest::PutRecordsRequest()
    : KinesisRequest(new PutRecordsRequestPrivate(KinesisRequest::PutRecordsAction, this))
{

}

bool PutRecordsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutRecordsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRecordsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRecordsRequest::response(QNetworkReply * const reply) const
{
    return new PutRecordsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutRecordsRequestPrivate
 *
 * @brief  Private implementation for PutRecordsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRecordsRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public PutRecordsRequest instance.
 */
PutRecordsRequestPrivate::PutRecordsRequestPrivate(
    const KinesisRequest::Action action, PutRecordsRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutRecordsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutRecordsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutRecordsRequest instance.
 */
PutRecordsRequestPrivate::PutRecordsRequestPrivate(
    const PutRecordsRequestPrivate &other, PutRecordsRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
