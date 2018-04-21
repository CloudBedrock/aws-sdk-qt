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

#include "updatecustomverificationemailtemplaterequest.h"
#include "updatecustomverificationemailtemplaterequest_p.h"
#include "updatecustomverificationemailtemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::UpdateCustomVerificationEmailTemplateRequest
 * \brief The UpdateCustomVerificationEmailTemplateRequest class provides an interface for SES UpdateCustomVerificationEmailTemplate requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SesClient::updateCustomVerificationEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCustomVerificationEmailTemplateRequest::UpdateCustomVerificationEmailTemplateRequest(const UpdateCustomVerificationEmailTemplateRequest &other)
    : SESRequest(new UpdateCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCustomVerificationEmailTemplateRequest object.
 */
UpdateCustomVerificationEmailTemplateRequest::UpdateCustomVerificationEmailTemplateRequest()
    : SESRequest(new UpdateCustomVerificationEmailTemplateRequestPrivate(SESRequest::UpdateCustomVerificationEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCustomVerificationEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCustomVerificationEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCustomVerificationEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCustomVerificationEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::SES::UpdateCustomVerificationEmailTemplateRequestPrivate
 * \brief The UpdateCustomVerificationEmailTemplateRequestPrivate class provides private implementation for UpdateCustomVerificationEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a UpdateCustomVerificationEmailTemplateRequestPrivate object for SES \a action,
 * with public implementation \a q.
 */
UpdateCustomVerificationEmailTemplateRequestPrivate::UpdateCustomVerificationEmailTemplateRequestPrivate(
    const SESRequest::Action action, UpdateCustomVerificationEmailTemplateRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCustomVerificationEmailTemplateRequest
 * class' copy constructor.
 */
UpdateCustomVerificationEmailTemplateRequestPrivate::UpdateCustomVerificationEmailTemplateRequestPrivate(
    const UpdateCustomVerificationEmailTemplateRequestPrivate &other, UpdateCustomVerificationEmailTemplateRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
