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

#include "updatedestinationrequest.h"
#include "updatedestinationrequest_p.h"
#include "updatedestinationresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::UpdateDestinationRequest
 *
 * \brief The UpdateDestinationRequest class encapsulates Firehose UpdateDestination requests.
 *
 * \ingroup Firehose
 *
 *  <fullname>Amazon Kinesis Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Firehose is a fully managed service that delivers real-time streaming data to destinations such as Amazon
 *  Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), and Amazon
 *
 * \sa FirehoseClient::updateDestination
 */

/*!
 * @brief  Constructs a new UpdateDestinationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDestinationRequest::UpdateDestinationRequest(const UpdateDestinationRequest &other)
    : FirehoseRequest(new UpdateDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateDestinationRequest object.
 */
UpdateDestinationRequest::UpdateDestinationRequest()
    : FirehoseRequest(new UpdateDestinationRequestPrivate(FirehoseRequest::UpdateDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDestinationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateDestinationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDestinationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FirehoseClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDestinationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDestinationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateDestinationRequestPrivate
 *
 * @brief  Private implementation for UpdateDestinationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDestinationRequestPrivate object.
 *
 * @param  action  Firehose action being performed.
 * @param  q       Pointer to this object's public UpdateDestinationRequest instance.
 */
UpdateDestinationRequestPrivate::UpdateDestinationRequestPrivate(
    const FirehoseRequest::Action action, UpdateDestinationRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDestinationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDestinationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDestinationRequest instance.
 */
UpdateDestinationRequestPrivate::UpdateDestinationRequestPrivate(
    const UpdateDestinationRequestPrivate &other, UpdateDestinationRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
