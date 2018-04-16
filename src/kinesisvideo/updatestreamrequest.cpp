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

#include "updatestreamrequest.h"
#include "updatestreamrequest_p.h"
#include "updatestreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateStreamRequest
 *
 * \brief The UpdateStreamRequest class encapsulates KinesisVideo UpdateStream requests.
 *
 * \ingroup KinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateStream
 */

/*!
 * @brief  Constructs a new UpdateStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateStreamRequest::UpdateStreamRequest(const UpdateStreamRequest &other)
    : KinesisVideoRequest(new UpdateStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateStreamRequest object.
 */
UpdateStreamRequest::UpdateStreamRequest()
    : KinesisVideoRequest(new UpdateStreamRequestPrivate(KinesisVideoRequest::UpdateStreamAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStreamRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateStreamResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisVideoClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStreamRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStreamResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateStreamRequestPrivate
 *
 * @brief  Private implementation for UpdateStreamRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateStreamRequestPrivate object.
 *
 * @param  action  KinesisVideo action being performed.
 * @param  q       Pointer to this object's public UpdateStreamRequest instance.
 */
UpdateStreamRequestPrivate::UpdateStreamRequestPrivate(
    const KinesisVideoRequest::Action action, UpdateStreamRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateStreamRequest instance.
 */
UpdateStreamRequestPrivate::UpdateStreamRequestPrivate(
    const UpdateStreamRequestPrivate &other, UpdateStreamRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
