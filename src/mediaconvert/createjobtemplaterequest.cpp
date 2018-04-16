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

#include "createjobtemplaterequest.h"
#include "createjobtemplaterequest_p.h"
#include "createjobtemplateresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreateJobTemplateRequest
 *
 * \brief The CreateJobTemplateRequest class encapsulates MediaConvert CreateJobTemplate requests.
 *
 * \ingroup MediaConvert
 *
 *
 * \sa MediaConvertClient::createJobTemplate
 */

/*!
 * @brief  Constructs a new CreateJobTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateJobTemplateRequest::CreateJobTemplateRequest(const CreateJobTemplateRequest &other)
    : MediaConvertRequest(new CreateJobTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateJobTemplateRequest object.
 */
CreateJobTemplateRequest::CreateJobTemplateRequest()
    : MediaConvertRequest(new CreateJobTemplateRequestPrivate(MediaConvertRequest::CreateJobTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateJobTemplateRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateJobTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateJobTemplateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateJobTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateJobTemplateResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateJobTemplateRequestPrivate
 *
 * @brief  Private implementation for CreateJobTemplateRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateJobTemplateRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public CreateJobTemplateRequest instance.
 */
CreateJobTemplateRequestPrivate::CreateJobTemplateRequestPrivate(
    const MediaConvertRequest::Action action, CreateJobTemplateRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateJobTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateJobTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateJobTemplateRequest instance.
 */
CreateJobTemplateRequestPrivate::CreateJobTemplateRequestPrivate(
    const CreateJobTemplateRequestPrivate &other, CreateJobTemplateRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
